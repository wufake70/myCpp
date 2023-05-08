#include<iostream>

using namespace std;

int main()
{
    // 数组元素的删除

    // 思路: ①找到要删除元素的下标
    //       ②从找到的下标开始，后面一个元素赋值给前一个

    int li[99] = {894,75,20,9,7,0,4,5,2,39,84,0}; 
    int len = sizeof(li) / sizeof(int),
        index = -1,     // 索引为 -1 表示没找到
        value = 3;      // 要删除元素

    // 匹配要删除的元素
    for(int i=0; i<len; i++) 
    {
        if(li[i]==value) 
        {
            index = i;
            break;
        }
            
    }
        

    // 元素交换
    if(index != -1)
    {
        for(int e=index; e<len-1; e++)  // len-1 防止 e+1 超过数组的长度
        {
            li[e] = li[e+1];
        }
        
        for(auto i:li) cout << i << endl;
        
    }else{
        cout << "该元素不存在！！！" << endl;
    }
}
    

    