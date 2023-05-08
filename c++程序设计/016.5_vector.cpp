#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
    // vector（矢量） 是一个快速的动态分配内存的数组，模板类
    // 需要导入 vector 和 使用 using namespace std;
    // 可以插入和删除元素

    // 定义和初始化
    // 格式: 
    // vector<double> name;     常用
    // vector<string> name2(5);   默认分配 5个空间
    // vector<string> name3(2,0);   20个元素 每个元素都是 0；

    //vector <int> a = {178,2,87,65,8,29};
    vector <int> a {178,2,87,65,8,29};
    

    // 常用函数
    // clear()         移除所有数据
    //a.clear();

    //  empty()         判断容器是否为 空
    //cout << a.empty() << endl;   返回 0

    // size()          返回容器中元素的个数
    // cout << a.size() << endl;  返回 6

    // [index],at(index) 返回索引为index的元素
    //cout << a[0] << endl;
    //cout << a.at(0) << endl;

    // vector 的通用遍历方法: 使用迭代器 (iterator)
    // 声明对应的迭代器,实际上是一个指针对象 ; :: 域运算符
    vector<int>::iterator it;   
    /*
    for(it = a.begin(); it != a.end(); ++it)  // it++ 会导致缓存的增加
    {
        cout << *it << endl;  // *it 表示 取it(指针对象)的地址，找到他对应的值。
    }
    */
    

    //erase(position) 删除pos位置处的数据
    // 参数 是一个迭代器类型 
    it = a.begin();  // begin(),end()   返回容器首、尾元素的迭代器
    //a.erase(it+2);   // 删除第三个 元素

    // erase(beg, end) .....
    //a.erase(a.begin()+4,a.end());   //删除 5~最后一个 元素

    // front()         返回第一个元素
    // cout << a.front() << endl;
    // cout << a.back() << endl;   // 返回 最后一个元素
    
    //insert(posi,e)  在posi处插入一个元素
    //a.insert(a.begin()+2,8888);      // 在第三个元素后 插入 8888

    // pop_back()      删除最后一个元素
    //a.pop_back();       // 178,2,87,65,8,29

    //push_back(elem)   在后面 追加一个元素
    //a.push_back(9999);

    // resize(int)      重置vector 大小 
    // a.resize(3);
    for(auto i:a) cout << i << endl;

    



    
    

    



}