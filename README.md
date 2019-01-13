# Google buffer protocal 2 ROS message in [Apollo]

将`Apollo`中所用的**Google buffer protocal**转换为**ros message**。在**gprotoc**中一个协议文件可以定义多个类，而
一个**ros**的一个文件只可以定义一个类。本程序读取每个协议文件，将每个`message`生成一个*.msg*文件。并且输出对应的`c++`代码转换函数。

代码中提供了*generate.sh*将*protocal*中的所有协议输出到当前目录的*message*与*transorm*中。

这个程序很多地方是针对`Apollo`以及我自己移植的目录结构而言的，代码中的`protocal`是`Apollo`中所有的**gprotoc**的协议文件,在

> *protocal*目录中的*build.sh*文件，可以将这些文件编译为一个静态库。

## map类型
在遇到`map`类型时，会直接输出一个单独的*.msg*文件。例如：`map<int, string>`会生成一个名为*MapIntStringEntry.msg*的**ros message**。原来的`map`变量转换为`rosmsg`时变为`repeated MapIntStringEntry`一个队列变量。其对应文件内容为：

```
// MapIntStringEntry.msg
int key
string value
```

## oneof类型
如果遇到`oneof`类型，会将其中每个字段都直接作为`rosmsg`中的字段，忽略`oneof`本身。这样的转换至少在逻辑上是讲的通的。

## enum类型
遇到`enum`则将直接作为一个单独的`rosmsg`生成独立的*.msg*文件。

## message嵌套
遇到`message`中定义了`message`,例如：

```
message xxx{
  message yyy {
    ...
  }
}
```

会将`yyy`提取出来作为单独的*.msg*文件。

## 编译

1. flex
2. bison
3. tinyxml2

使用了*flex*与*bison*做了词语法分析器。因为要生成`rosmsg`的*package.xml*所以使用了*tinyxml2*库。

```
flex ./g2r.l
bison -d ./g2r.y
g++ lex.yy.c g2r.tab.c makepkg.cc -ltinyxml2 -w -o ./g2r.out
```
