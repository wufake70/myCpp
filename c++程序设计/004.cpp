#include <iostream>

using namespace std;

int main()
{
	cout << "二进制 0b110: " << 0b1010 << endl 	// vc6.0 不可这样表示
		 << "八进制 012: " << 012 << endl
		 << "十六进制 0xf: " << 0xf << endl;

	cout << "Hex（后面输出16进制）:" << hex << 255 << endl;
	cout << "Dec（后面输出10进制）:" << dec << 255 << endl;
	cout << "Oct（后面输出8进制）:" << oct << 255 << endl;

	int a=0;
	if(a!=0&&a)
	{
		cout << "0000" << endl;
	}
}
