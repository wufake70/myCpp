#include <iostream>

using namespace std;

int main() 
{
	
	
	long long int zs;
	cout << "请输入一个正整数:\n";
	cin >> zs;
	
	if (zs != 2)   
	{
		for (int i = 2; i < zs - 1; i++)  // for循环 逐个相除
		{
			if ((zs % i) == 0)  // 取余为0（整除）,非质数
			{
				
				cout << zs << "不是质数。\n";
				
				return 0;
			}
			
		}
		
		cout << zs << "是质数。\n";
		return 0;
		
	} else {
		
		cout << zs << "是质数。\n";
	}
	
	//cout << zs;
	
	
	return 0;
	
}




