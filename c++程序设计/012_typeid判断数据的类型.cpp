#include <iostream>
using namespace std;

int main()
{
    // 判断数据的类型---typeid 方法

    cout << typeid(8).name() << endl;                           //  打印: i (int)
    cout << typeid(8877983555).name() << endl;                  // x
    cout << typeid(8709578267852467308888888888).name() << endl;         // n
    cout << typeid(8.16).name() << endl;                        // *** 浮点数 默认类型 为 double 而不是 float。***** d (double)
    cout << typeid(8.999999999999999999999999999999999).name() << endl;  // d
    cout << typeid(true).name() << endl;                        // b (bool)      
    cout << typeid(false).name() << endl;                        // b (bool)
    cout << typeid("你hufhleru").name() << endl;                        // A4_c
    cout << typeid('n').name() << endl;                         // c (char)

}
