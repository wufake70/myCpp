#include "iostream"
#include "string"
using namespace std;

int main() 
{

	// sizeof 运算符 ,以字节形式给出其操作数的存储大小(单位 )


	cout << "short int 类型的存储大小: " << sizeof(short int)<< endl; 		//2
	cout << "(long) int 类型的存储大小: " << sizeof(int)<< endl; 			//4
	cout << "long long int 类型的存储大小: " << sizeof(long long int)<< endl; //8
	cout << "float 类型的存储大小: " << sizeof(float)<< endl; 			// 4
	cout << "double 类型的存储大小: " << sizeof(double)<< endl; 		// 8
	cout << "long double 类型的存储大小: " << sizeof(long double)<< endl; // 16
	cout << "bool 类型的存储大小: " << sizeof(bool)<< endl; 			// 1
	cout << "char 类型的存储大小: " << sizeof(char)<< endl; 			// 1
	cout << "h 字符的存储大小" << sizeof('h')<< endl;  					// /
	cout << "string 类型的存储大小: " << sizeof("hello"[0])<< endl; 		// 5+1
	cout << "小 中文字符的存储大小" << sizeof("小")<< endl; 			// 4

	



	



}



















