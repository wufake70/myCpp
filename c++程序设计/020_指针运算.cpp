#include<iostream>

using namespace std;

int main()
{
    //指针运算
    // 指针的递增和增减(++,--)
    // (+,-)

    int a[] {1,2,3,4,5};
    int* b=a;
    cout << *(++b) << endl;
    cout << *(--b) << endl;
    cout << b << endl  //0x61fe00
         << (b+4) << endl;//0x61fe10 相差 16

}