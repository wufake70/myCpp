#include <iostream>
#include "windows.h"
using namespace std;

int fun1()
{
	int x;
	cout << "请输入:\n";
	cin >> x;
	if ((10<x)&&(x<=100)&&(x%2 ==0)) // (10<x<=100)&&((x%2) ==1) 此条件 无效
	{
		
		cout << "正确！";
		
	} else {
		
		cout << "错误!!\n";
	}
	return 0;
}

int main() 
{
	
	
	while (true)
	{
		
		fun1();
	}
	
}