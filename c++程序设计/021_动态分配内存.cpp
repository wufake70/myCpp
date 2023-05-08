#include<iostream>

using namespace std;

int main()
{
    //指针真正的用武之地: 
    //  在运行阶段分配未命名的内存以存储值。
    
    /*
     * int a = 8;
     * int b[] {8,80,9};
     * 以上都是在编译阶段 就进行内存分配；
     */
      
    
    //使用new 分配内存，delete 释放分配的内存。
    // 在运行阶段 为一个int 值 分配未命名的内存；
    int* ptr1 = new int;
    delete ptr1;
    int* li = new int[8];
    delete [] li;       // 需要中括号


    //num、nums 在栈区，10、{8,9,7} 在 常量区(静态区)
    int num = 10;
    int nums[] {8,9,7};

    // ptr2 在栈区，new double[10] 在堆区
    double * ptr2 = new double[10];



}
int x = 10;  // 全局区






