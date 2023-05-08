#include <iostream>

using namespace std;

int main() 
{
	int a = 20,b;
	float x = 3.5;
	b = a% (int)x; // 强制转换为整型(零时转换，并不改变原值)
	cout << a << endl;
	cout << x << endl;
	cout << b << endl;
	
	

	
}



