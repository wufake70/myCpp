#include<iostream>

using namespace std;
/**
 * 返回值类型 int、float、double、string、void、bool
 * 函数名
 * 参数列表 
 * 
 * 
*/

//自定义函数 过程

// ①函数原型  (告诉编译器)
int sum(int,int); // 参数名称可以省略

// ②声明函数
int sum(int a,int b)
{
    return a+b;
    
}


int main()
{
    cout << "总和为: " << sum(9,100) << endl;   // ③函数 调用
}


// c++ 不可单独返回 数组







