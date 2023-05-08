#include <iostream>

using namespace std;

int main() {
    //变量: 计算机中一块特定的内存空间，用于存储数据

    //命名规则
    /*
    ①变量名(标识符) 只能有字母，数字和下划线三种字符组成
    ②开头不能是 数字
    ③不可以使用保留字
    */  

    //数据类型，数值类型，非数值类型。
    /*
    数值:
    整型 int、short、long、long long

    非整形 float、double、long double
    */
    /*
    非数值:
    string
    bool
    */


  //常用用数据类型
  
  //整型  int 32bit(四字节) 
  cout << INT_MAX << endl;  //int 最大值
  cout << INT_MIN << endl;  //int 最小值

  //short int 短整型，二字节
  cout << SHRT_MAX << endl //32767
  << SHRT_MIN << endl;   

  //long int 通整形int 一样 四字节
  cout << LONG_MAX << endl; // 2147483647

  //long long int
  cout << LLONG_MAX << endl; //9223372036854775807

  //float 单精度浮点型 四字节

  //double 双精度浮点型 八字节

  //long double 

  //char  一字节，字符型 用于存储单个字符
  //注意: char 隶属于整型 ，用整形保存


  //bool 布尔类型 也是用整型保存


  // 非数值类型 数据
  // string  字符串
  string str = "你好世界!!!";
  cout << str << endl;

  //void 空的

  //枚举类型
  //将变量的值一一列举出来，
  //变量的值只能在列举出来的值的范围内。
  

  return 0;


  














}