#include <iostream>
using namespace std;

int main() {

    cout << "hello world";
    return 0;
    /*
    c++的 编译和执行:
        g++ c++的编译器
        过程: 
        代码 .cpp-->预处理-->编译，汇编文件-->目标文件-->链接 函数库，生成 exe 可执行文件 

        1.(# include...)生成预处理 文件
        g++ -o .\004_c++入门.ii -E .\004_c++入门.cpp

        2.将 预处理文件 编译成 汇编文件
        g++ -o .\004_c++入门.s -S .\004_c++入门.ii

        3.将 汇编文件 转为 目标文件(二进制文件)
        g++ -o .\004_c++入门.o -c .\004_c++入门.s

        4.将目标文件 与c++函数库链接，生成exe 可执行文件
        g++ -o .\004_c++入门.exe .\004_c++入门.s


    */
}