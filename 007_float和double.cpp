#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    
    // folat 单精度浮点型，四字节，
    // 最多保留 6~7位有效数字。(不适用于显示 大型数字)
    float num = 1.2345, 
    num1 = 1.23456,
    num2 = 1.234567,
    num3 = 1.2345678,
    num4;

    //单精度 浮点类型简写
    num4 = 1.23456789f;
    cout << num << "\n" 
    << num1 << "\n"
    << num2 << "\n"
    << num3 << "\n"
    << num4 << endl;

    //double 双精度浮点型,范围 -30000~30000
    //long double ，八字节
    //最多保留 15位有效数字
    
    // 强制 显示小数(不是科学计数法)
    cout << fixed;
    //设置精度，需导入 iomanip 头文件
    cout << setprecision(2); // 保留两位小数 
    // 使用长双精度类型。
    long double num5 = 1234567890.123456d,
    num6 = 999999999999999.0d,
    num7 = 12345.4444440d;

    cout << num5 << "\n"
    << num6 << "\n"
    << num7;

    



    return 0;

}