#include <iostream>
#include <cstdio>

using namespace std;

int main() 
{
    //声明变量和使用变量

    //声明 整型变量
    int num_1;
    short int num_2;
    long int num_3 = 6666666; // 声明并初始化
    //初始化变量(变量赋值)
    num_1 = 22221000;
    num_2 = 10000;
    // num_3 = 6666666;
    // 注意: 一条语句可以声明 多个相同类型的变量。
    int num_4 = 99999, 
    num_5 = 012; // c++中的八进制 0开头

    cout << num_1 << endl
    << num_2 << endl
    << num_3 << endl
    << num_4 << endl
    << num_5 << endl;

    string str_1 = "hello",
    str_2 = "world";

    //使用 << 使用插入运算符 作字符串拼接。
    cout << str_1 << " " << str_2; 


    //如果要使用 printf函数需要导入 cstdio 头文件。
    printf("\nhello world!!\n %d",str_1);

    

    return 0;

    







}