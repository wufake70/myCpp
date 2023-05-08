#include<iostream>
using namespace std;

int main() 
{
    double num=1024.9;

    double* ptr1 = &num;

    cout << "ptr1的值为: " << ptr1 << endl
         << "ptr1指向空间的值: " << *ptr1 << endl;

    char ch = 'b';
    char * ptr2 = &ch;

    // 在C语言和C++中 默认将 char型 指针 当作字符串
    cout << "ptr2的值为: " << ptr2 << endl // 默认打印字符串,而不是地址值
         << "ptr2指向的值为: " << *ptr2 << endl
         << "强制转换 ptr2: " << (void *)ptr2 << endl; // (void *) 表示  强制转换任意类型

    


    
    
}