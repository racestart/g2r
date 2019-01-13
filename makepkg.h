#ifndef G2R_MAKEPKG_H
#define G2R_MAKEPKG_H

#include "g2r.h"

int make_package_xml(struct package_t* pkg);
int make_CMakeLists(struct package_t* pkg);

#endif