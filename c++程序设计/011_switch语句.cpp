#include "iostream"
using namespace std;


int main()
{
    // switch语句
    int x;
    cout << "请输入一个整数:" << endl;
    cin >> x;

    switch (x)
    {
    case 0:
        cout << "输入了一个 0" << endl;
        break;
    
    default:
        cout << "输入了一个 非零数" << endl;
        break;
    }



}

