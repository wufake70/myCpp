#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int>a = {67,18,0,74,67,10,8,7};
    vector<int>::iterator it;

    // 排序 升序
    sort(a.begin(),a.end());

    // 反向排序 降序
    reverse(a.begin(), a.end());

    for(auto i:a) cout << i << endl;
    

}