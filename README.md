## Plan

订一个计划，通读C++ Primer 5th，习题照写。

形式仿照

[C++ Primer》第五版中文版习题答案](https://github.com/huangmingchuan/Cpp_Primer_Answers)

[Solutions for C++ Primer 5th Answers](https://github.com/pezy/CppPrimer)

Blog地址：http://liuyanfight.github.io/c++/Cpp-plan.html

Github: https://github.com/liuyanfight/cpp

## Schedule

| Chapter                                  |  Status  |    Date    |
| :--------------------------------------- | :------: | :--------: |
| **[第1章 : 开始](http://liuyanfight.github.io/c++/Cpp-ch01.html)** | Complete | 2017-08-04 |
| **第 I 部分 : C++基础**                       |          |            |
| [第2章 : 变量和基本类型](http://liuyanfight.github.io/c++/Cpp-ch02.html) | Ongoing  |            |
| 第3章 : 字符串、向量和数组                          |          |            |
| 第4章 : 表达式                                |          |            |
| 第5章 : 语句                                 |          |            |
| 第6章 : 函数                                 |          |            |
| 第7章 : 类                                  |          |            |
| **第 II 部分 : C++标准库**                     |          |            |
| 第8章 : IO库                                |          |            |
| 第9章 : 顺序容器                               |          |            |
| 第10章 : 泛型算法                              |          |            |
| 第11章 : 关联容器                              |          |            |
| 第12章 : 动态内存                              |          |            |
| **第 III 部分 : 类设计者的工具**                   |          |            |
| 第13章 : 拷贝控制                              |          |            |
| 第14章 : 重载与类型转换                           |          |            |
| 第15章 : 面向对象程序设计                          |  Ongoing        |     2019/12/9       |
| 第16章 : 模版与泛型编程                           |          |            |
| **第 IV 部分 : 高级主题**                       |          |            |
| 第17章 : 标准库与特殊设施                          |          |            |
| 第18章 : 用于大型程序的工具                         |          |            |
| 第19章 : 特殊工具与技术                           |          |            |



## C++ Primer 5th 源码使用

下载地址 [http://www.informit.com/title/032174113](http://www.informit.com/title/032174113) 

我下载了GCC版本，丫的没想到直接make后生成了 .exe， 让特意在Linux环境下跑代码的我情何以堪。

可通过修改make文件来生成linux可执行文件

将`makefile`中的.exe修改为.o

- `rename 's/.o$//' *.o` 可将.o后缀文件修改为无后缀文件
- ``ls | grep -v "\." | grep -v 'makefile\|runpgms\|README' | xargs rm`` 删除所有无后缀名可执行文件
- `./add_item < data/add_item ` 实现数据的载入，省了编了 

## Windows环境下设置Git代理
Github有桌面版，用惯后总觉得还是命令行爽，但是居然push不上去，猜想应该是代理的原因
在Git Bash下：

`git config --global http.proxy 'socks5://127.0.0.1:1080'`  
`git config --global https.proxy 'socks5://127.0.0.1:1080'`
