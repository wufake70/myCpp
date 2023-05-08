#include<iostream>

using namespace std;

int main()
{
    //数组
    // 存储在一块连续的内存空间中
    // 数组名就是这块连续内存空间的 首元素地址。

    int a[] {1,2,3,4,5,6,7,8,9,1};  // 8x9=72
    int * b=a;
    b=&a[0];  // 付一个 数组首元素 的地址
    cout << b << endl << a << endl;  //地址 是相同。
    //cout << ((int)*b == typeid(a)? "是":"否") << endl;

    
    //指针保存的是内存地址 ，
    cout << sizeof(a) << "\t" << sizeof(b) << endl;// 72   8
}