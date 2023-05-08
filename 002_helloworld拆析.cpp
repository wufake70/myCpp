

// ’#‘ 开头是预处理指令
// #include语句不是必须的，但是程序中有该语句，
// 就必须将它放在程序的开始处
// iostream: input output stream（数据流）
// iostream 中包含了有关输入输出语句的函数
#include <iostream> // 引入头文件，也可使用 "iostream"

// 使用命名空间std(standard标准)
// 不写命名空间std ，下面的输出语句就要加上，std::cout,
// 避免 命名重复
using namespace std;  

int main() {
    // << 插入运算符，
    // endl是控制符，表示换行(\n)
    // endl 与 \n 的区别:
    // \n 只有换行功能，endl还可以 清除缓存。
    cout << "hello world" << endl;
    cout << "hello" << " world" << endl;  
    return 0;
}








    






