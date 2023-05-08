#include <iostream>

using namespace std;

int main() 
{
    // char 字符型,8位,空间 一字节, 取值范围: -128~+128
    // 注意: 只能存储 单个 英文字符；
    // 初始化(赋值时) 只能使用 单引号;
    // 也可以填入 字符的ASCII 码；
    // A~Z,65~90;  a~z,97~122;
    
    
    char n = 105,
    m = 'i';
    
    cout << n << "\n" << m;
    

    return 0;


}