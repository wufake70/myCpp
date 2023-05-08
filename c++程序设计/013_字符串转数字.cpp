#include "iostream"
#include "string"  // vc6 中导入 string文件 不要使用 iostream.h 文件，且 iostream.h 不能与using namespace std 一起使用；

using namespace std;

int main() 
{
    // 字符串数据 转为 数字

    string a, b;

    cout << "请输入一个数:";
    cin >> a;

    //使用 atoi(转为 整数)、atof(转为 浮点数)、atoll(长整型)..... 函数  和 c_str 方法 进行转换
    // 再结合 字符串的 find方法 ，如果存在 就返回 对应索引，不存在 就返回 string::npos;

    // 先判断 类型
    if (a.find('.') == string::npos)  
    {
        // 整数
        b = typeid(atoi(a.c_str())).name();   // i (interget)
        
    } else {
        
        // 小数
        b = typeid(atof( a.c_str())).name();  // d (double)

    }

    
    cout << "该数字为 " << (b =="d"? "小数" : "整数") << endl;
    

}