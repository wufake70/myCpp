#include <iostream>
//#include <windows.h>
#include <string>
using namespace std;


int main() 
{
    /*
    cin，cout都是 iostream类的 一个实例对象
    cin对象 附属到标准的输入设备(键盘)，
    通常与 '>>' 提取运算符 结合使用。

    cout 对象"连接"到标准输出设备(显示屏)，
    通常与 '<<' 插入运算符 结合使用。

    */
   
    

    string name;
    cout << "请输入您的名字\n:";
    cin >> name;
    
    // 输入中文字符，不能显示;空格 后的内容，不能显示；
    cout << "您好!! " << name <<  "\n"; 
    
    // 防止 双击 闪退。
    system("pause");
    return 0;
	

}