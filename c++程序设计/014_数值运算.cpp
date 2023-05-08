#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main()
{
    int a,b,c;
    double i,j,k;
    // mvc6.0 没有long long int 数据类型;

    // 整数加减乘除
    cout << 1 + 8 << endl
    << 1 - 8 << endl
    << 1 * 8 << endl
    << 1 / 8 << endl  // 整数相除 隐式转换为 整数(舍去小数部分)
    << 10 / 8 << endl  // 整数相除 隐式转换为 整数(舍去小数部分)
    << endl;  // 9

    // 整数与小数 加减乘除
    cout << 1 + 1.0 << typeid(1+1.0).name() << endl  // 输入整数， 实则 double类型
    << 1 - 0.6 << endl
    << 1 * 0.6 << endl
    << 1 / 3.0<< endl  // 默认输出的精度为 6位
    // 设置精度 通过导入 iomanip 头文件 使用 setprecision 方法
    // 0    表示没有精度 出去小数
    // 1    表示 保留以为小数 ....
    << setprecision(1) << 1 / 3. << endl
    << setprecision(2) << 1 / 3. << endl
    << setprecision(100) << 1 / 3. << endl << endl;  // 不准确(编程语言通病)

    // pow() 幂运算
    // mv c++ 6.0 如此
    cout << pow(-1, 1) << typeid(pow(-1,1)).name()              // 返回的 都是 double类型
    << endl << pow(-1.03, 1) << typeid(pow(-1.03,1)).name() 
    << endl << pow(-1, 1.0) << typeid(pow(-1,1.0)).name() << endl << endl;

    // abs() 取绝对值
    // 注意: Microsoft visual c++ 6.0 中 返回的 都是 int类型，可以使用 fabs 函数
    cout << abs(10) << typeid(abs(10)).name() << endl   // 返回整型
    << abs(-2.0) << typeid(abs(-2.0)).name() << endl << endl;  // 返回 double类型

    // sprt() 开根号
    // mvc++6.0 如此
    cout << sqrt(9) << typeid(sqrt(9)).name() << endl  // 都为 double类型
    << sqrt(1) << typeid(sqrt(1)).name() << endl
    << sqrt(9.08) << typeid(sqrt(9.08)).name() << endl << endl;

    // 在vc6.0中 需要导入 windows.h头文件 才能使用 max()、min()
    cout << "8,99中的最大值: " << max(8,99) << endl
         << "8,99中的最小值: " << min(8,99) << endl;
    


}























