#include "iostream"

using namespace std;

int main() 
{
	// 判断 数字的符号 ---- 三目运算
    
    int num;

    cout << "请输入一个实数:" << endl;
    cin >> num;

    char b = num>0? '+' : (num<0? '-' : '0');

    cout << num << " 符号为 " << b << endl;
	
	
}