#include<iostream>

using namespace std;

int main()
{
    // 引用变量是一个别名,引用并非对象，
    // 他是一个 已存在变量的 另一个名字

    int a = 19;

    // 创建引用变量
    int& r = a;  // r是一个初始化为a的整型引用
    r = 9;

    cout << a << endl;

    //指针与引用的关系
    //引用对指针进行了简单封装，底层任然是指针。
    // 获取引用地址，编译器会进行内部转换。







}