#include "makepkg.h"
#include "g2r.h"
#include "g2r_config.h"

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <sys/stat.h>
#include <sys/types.h>

#include <tinyxml2/tinyxml2.h>

extern void gerror(char* s, ...);
extern struct g2r_config gconfig;

char message_files[MAX_MESSAGE_IN_PACKAGE][MAX_BUFFER_SIZE] = {0};
int message_files_index = 0;

static char package_name_list[MAX_PACKAGE_SPACE][MAX_NAME_SIZE] = {0};

// -1 表示找到。正数表示索引
int found_exist_package_name(const char* pkg_name) {
  int i = 0;
  while (strlen(package_name_list[i])) {
    if (!strcmp(pkg_name, package_name_list[i])) {
      return -1;
    }
    i++;
  }
  return i;
}

int read_package_xml(char* xmlPath) {
  tinyxml2::XMLDocument doc;
  if (doc.LoadFile(xmlPath)!=0) {
    return -1;
  }

  tinyxml2::XMLElement* root=doc.RootElement(); 
  tinyxml2::XMLElement* build_depends = root->FirstChildElement("build_depend"); 
  while (build_depends != NULL) {
    const char* text = build_depends->GetText();
    int index = 0;

    if ((index = found_exist_package_name(text)) != -1) {
      if (index == MAX_PACKAGE_SPACE) {
        gerror("it is over package count limit\r\n");
        return -1;
      }
      strcpy(package_name_list[index], text);
    }
    build_depends = build_depends->NextSiblingElement();
  }
  return doc.SaveFile(xmlPath);
}

int create_package_xml(char* xmlPath, struct package_t* pkg) {
  assert(pkg);

  FILE* fp = fopen(xmlPath, "w");
  if (fp == NULL) {
    gerror("create \'%s\' failed\r\n", xmlPath);
    return -1;
  };
  fprintf(fp, "<package>\r\n");
  fprintf(fp, "\t<name>ros_%s</name>\r\n", pkg->name);
  fprintf(fp, "\t<version>1.0.0</version>\r\n");
  fprintf(fp, "\t<description>google buffer protocal to ros msg for %s</description>\r\n", pkg->name);
  fprintf(fp, "\t<maintainer email=\"logic_yan@hotmail.com\">devilogic</maintainer>\r\n");
  fprintf(fp, "\t<license>Licensed under the Apache License, Version 2.0 </license>\r\n");
  fprintf(fp, "\t<buildtool_depend>catkin</buildtool_depend>\r\n");
  //fprintf(fp, "\t<build_depend>stdex_msg</build_depend>\r\n");
  //fprintf(fp, "\t<exec_depend>stdex_msg</exec_depend>\r\n");
  struct package_t* depend_pkg = pkg->next;
  char depend_name[64];
  int index = 0;

  while (depend_pkg) {
    if (!strcmp(depend_pkg->name, pkg->name)) {
      depend_pkg = depend_pkg->next;
      continue;
    }

    memset(depend_name, 0, 64);
    sprintf(depend_name, "ros_%s", depend_pkg->name);

    if ((index = found_exist_package_name(depend_name)) != -1) {
      if (index == MAX_PACKAGE_SPACE) {
        gerror("it is over package count limit\r\n");
        return -1;
      }
      strcpy(package_name_list[index], depend_name);

      fprintf(fp, "\t<build_depend>%s</build_depend>\r\n", depend_name);
      fprintf(fp, "\t<exec_depend>%s</exec_depend>\r\n", depend_name);
    }
    depend_pkg = depend_pkg->next;
  }

  fprintf(fp, "</package>\r\n");
  
  fflush(fp);
  fclose(fp);
  
  return 0;
}

int add_depend_to_package_xml(char* xmlPath, struct package_t* pkg) {
  tinyxml2::XMLDocument doc;
  if (doc.LoadFile(xmlPath)!=0) {
    gerror("read %s failed in add depends\r\n", xmlPath); 
    return -1;
  }

  tinyxml2::XMLElement* root = doc.RootElement();
  tinyxml2::XMLElement* build_depend_node = root->FirstChildElement("build_depend");
  tinyxml2::XMLElement* exec_depend_node = root->FirstChildElement("exec_depend");

  int index = 0;
  char depend_name[64];
  struct package_t* depend_pkg = pkg->next;

  while (depend_pkg) {
    if (!strcmp(depend_pkg->name, pkg->name)) {
      depend_pkg = depend_pkg->next;
      continue;
    }

    memset(depend_name, 0, 64);
    sprintf(depend_name, "ros_%s", depend_pkg->name);

    if ((index = found_exist_package_name(depend_name)) != -1) {
      if (index == MAX_PACKAGE_SPACE) {
        gerror("it is over package count limit\r\n");
        return -1;
      }
      strcpy(package_name_list[index], depend_name);

      //
      // add new depend to xml
      //
      tinyxml2::XMLElement* bd = doc.NewElement("build_depend");
      tinyxml2::XMLElement* ed = doc.NewElement("exec_depend");

      bd->InsertFirstChild(doc.NewText(depend_name));
      ed->InsertFirstChild(doc.NewText(depend_name));
      if (build_depend_node)
        root->InsertAfterChild(build_depend_node, bd);
      else
        root->InsertEndChild(bd);

      if (exec_depend_node)
        root->InsertAfterChild(exec_depend_node, ed);
      else
        root->InsertEndChild(ed);
    }

    depend_pkg = depend_pkg->next;
  }
  return doc.SaveFile(xmlPath);
}

int make_package_xml(struct package_t* pkg) {
  char package_xml_path[256] = {0};
  strcpy(package_xml_path, gconfig.output_msg_path);
  if (package_xml_path[strlen(package_xml_path)-1] != '/')
    strcat(package_xml_path, "/");
  for (int i = 0; i < pkg->header.package_name_count; i++) {
    strcat(package_xml_path, pkg->header.package_name[i]);
    strcat(package_xml_path, "/");
  }
  strcat(package_xml_path, "package.xml");

  if (read_package_xml(package_xml_path) == -1) {
    if (create_package_xml(package_xml_path, pkg) == -1)
      return -1;

    if (read_package_xml(package_xml_path) == -1)
      return -1;
  }

  return add_depend_to_package_xml(package_xml_path, pkg);
}

int make_CMakeLists(struct package_t* pkg) {
  assert(pkg);

  char path[256] = {0};
  strcpy(path, gconfig.output_msg_path);
  for (int i = 0; i < pkg->header.package_name_count; i++) {
    strcat(path, pkg->header.package_name[i]);
    strcat(path, "/");
  }
  strcat(path, "CMakeLists.txt");

  FILE* fp = fopen(path, "w");
  if (fp == NULL) {
    gerror("create \'%s\' failed\r\n", path);
    return -1;
  }

  fprintf(fp, "cmake_minimum_required(VERSION 2.8.3)\r\n");
  fprintf(fp, "project(ros_%s)\r\n", pkg->name);
  fprintf(fp, "find_package(catkin REQUIRED COMPONENTS message_generation\r\n");
  //fprintf(fp, "find_package(catkin REQUIRED COMPONENTS message_generation stdex_msg\r\n");
  int i = 0;
  while (strlen(package_name_list[i])) {
    fprintf(fp, "\t%s\r\n", package_name_list[i]);
    i++;
  }
  fprintf(fp, ")\r\n");

  fprintf(fp, "add_message_files(\r\n");
  fprintf(fp, "\tDIRECTORY msg\r\n");
  fprintf(fp, "\tFILES\r\n");
  for (int i = 0; i < message_files_index; i++) {
    fprintf(fp, "\t%s.msg\r\n", message_files[i]);
  }
  fprintf(fp, ")\r\n");

  fprintf(fp, "generate_messages(DEPENDENCIES)\r\n");
  fprintf(fp, "catkin_package(CATKIN_DEPENDS message_runtime)\r\n");

  fflush(fp);
  fclose(fp);

  return 0;
}