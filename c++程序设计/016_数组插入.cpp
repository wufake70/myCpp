#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    // 数组插入  
    //数组的长度一旦 确定，后面就不可以改变 
    int li[99] = {894,75,20,9,7,4,5,2,39,84,0}; 
    int len = sizeof(li) / sizeof(int),
        index = 1; // 将要插入的位置的索引值

    // 将要插入的 值 放在 最后边
    li[len-1] = 999;
    
    for(int i=len-1; i>index; i--)
    {
        // 元素相互交换
        int x=li[i],
            y=li[i-1];

        li[i]=y,
        li[i-1]=x;     
    }


    for(auto i:li) cout << i << endl;


}