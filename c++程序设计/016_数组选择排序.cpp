#include<iostream>

using namespace std;

int main()
{
    // 选择排序
    
    int a[] {4,46,74,6,576,73,8,898,89,8,604,67,46,57,65,6};
    int len = sizeof(a)/sizeof(int),
        x = a[0],
        index = 0;
        
    for(int i=0;i<len-1;i++)
    {
        //假设第一个为最小值，循环判断
        x = a[i];
        for(int ii=i;ii<len;ii++)
        {
        
            if(x>a[ii]) x=a[ii],index=ii;   // 升序
            if(x<a[ii]) x=a[ii],index=ii;   // 降序
        }
        
        //通过index变量的改变，进行对应索引的值的交换
        if(index)
        {
            a[index] = a[i],
            a[i] = x,
            index = 0;
        }
        
    
    }
    
    for(auto e:a)
    {
        cout << e << endl;
    }
    
    
}