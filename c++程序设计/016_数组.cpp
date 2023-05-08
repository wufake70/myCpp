#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    //声明一个数组  格式: 数据类型 数组名字 [元素个数] 
    int  array [4];

    // cout << typeid(array).name() << endl; A4_i

    // 初始化数组 
    int a [3] = {1,2};

    // 为数组单个元素 赋值
    a[0] = {2};

    //cout << a[0] << endl;
    

    // for循环遍历数组
    int b [100];
    for (int i=1; i<100; i++)
    {
        b[i]=i+1;
    }

    // for(int i=0; i<100; i++)
    for(auto ii:b)   // 
    {
        //cout << setw(5) << i << setw(5) << b[i] << endl;
        cout << setw(5) << ii << endl;
    }


    // 获取数组长度  方法: sizeof(数组) / sizeof(对应的元素类型)；
    int list[] {894,75,20,9,7,4,5,2,39,84,0};  // vc6.00 不可如此简写
    cout << "list数组的长度为" << sizeof(list) / sizeof(int) << endl;


    // 数组的最大/最小值
    int max = list[0],
        min = list[0];
    
    for(int i=0; i<4; i++)
    {
        //if(max<list[i]) max = list[i]; 
        if(min>list[i]) min = list[i];
    }

    //cout << "最大值为: " << max << endl;
    cout << "最小值为: " << min << endl;


    cout << "===================================" << endl;



}



