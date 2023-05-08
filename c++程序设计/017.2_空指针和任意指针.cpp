#include<iostream>

using namespace std;

int main()
{
    // 空指针 null pointer ----- nullptr
    // 空指针不指向 任何对象，在试图使用一个 指针之前，
    // 可以首先检查是否为空。

    // 用法:
    // int * ptr1 = nullptr;    等价于 int *ptr1 = 0;
    // int *ptr2 = 2;           直接将ptr2初始化为字面量0;

    double *ptr1;       // 在不给指针赋值时，他会有一个默认值。
    ptr1 = nullptr;    // 这里的nullptr 是double 类型。
    cout << ptr1 << endl << typeid(*ptr1).name() << endl;  // double

    //char *ptr2 = nullptr;      //
    //cout << ptr2 << endl << typeid(*ptr2).name() << endl;

    //void *(void*) 指针，用于 与其他指针类型 进行比较，不可修改
    // 一种特殊的指针类型，可以存放任意对象的地址。
    double num = 3.14;
    double * ptr3 = &num;
    void * ptr4 = &num;

    cout << "ptr3和ptr4是否相等:"<< (ptr3 == ptr4? "是":"否") << endl; //是
    
    // 'void*' is not a pointer-to-object typegcc 
    // *ptr4 = 9.9999;      编译器 拒绝修改


    cout << "num是否被修改: " << (num != *ptr3? "是":"否") << endl;
    



}   