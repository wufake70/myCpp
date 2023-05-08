#include<iostream>

using namespace std;

int main()
{
    // 数组排序 ------ 冒泡排序
    // 原理: 让最后一个元素 与其前一个元素 进行比较 大小，
    // 如果是升序(后面一个元素小)，就让 小的元素往上走(即两个元素的值进行交换)，向上循环比较 即可；降序 反之
    // 使用两个for循环，内循环 能确定 一个元素的位置，外循环 循环 数组长度次 即可

    // list {894,75,20,9,7,4,5,2,39,84,0}
    int list[] {894,75,20,9,7,4,5,2,39,84,0};  // vc6.00 不可如此简写
    
    int len = sizeof(list) / sizeof(int);
    for(int i=len; i>0; i--)
    {
        for(int ii=len-1; ii>len-i; ii--)  // 优化
        {
            //if(list[ii]<list[ii-1])     // 升序
            if(list[ii]>list[ii-1])      // 降序
            {
                // 交换 对应索引 的值
                int x = list[ii],
                    y = list[ii-1];

                list[ii] = y,
                list[ii-1] = x;
            }
        }
    }

    for(auto e:list)
    {
        cout << e << endl;
    }

}