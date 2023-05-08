#include<iostream>

using namespace std;

int main()
{
    /*
    指针(pointer)是一个值为内存地址的变量。
    基本用法:
    int * ptr1;         声明整型指针
    ......

    ptr1 = &num;        给指针赋值

    *ptr1;              使用指针


    */
    int  var1;
    char var2[10];
    
    cout << "var1 变量的地址： " << &var1 << endl;
    
    cout << "var2 变量的地址： " << &var2 << endl;

    cout << "=======================================" << endl;

    int a = 10;
    // 声明一指针变量
    int * ip;
    // 给指针变量赋值
    ip = &a;
    cout << "a变量的值 " << a << endl;
    cout << "ip指针变量存储的地址值 " << ip << endl;
    cout << "访问ip指针地址的值 " << *ip << endl;


 





}