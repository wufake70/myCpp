#include<iostream>
#include<string>

using namespace std;

int main()
{
    // 二位数组
    // 格式: int name[行数][列数];

    int a[3][3] = {99};
    a[1][1] = 100;
    cout << a[0][0] << endl 
         << a[1][1] << endl;

    cout << "=============================================" << endl;

    // 输出学生 成绩单
    string name[3] {"孙悟空","猪八戒","沙和尚"};
    string course[3] {"语文","数学","英语"};

    int name_len = sizeof(name)/sizeof(name[0]),    //该方法获取的长度 只对于 元素字符串长度统一时 有效；
        cour_len = sizeof(course)/sizeof(course[0]);

    double scores[name_len][cour_len];

    // 使用for循环 插入数据

    for(int r=0; r<name_len; r++)   //外循环控制 行
    {
        // 内循环控制 列
        for(int c=0; c<cour_len; c++) scores[r][c] = 99;

    }

    // 输出 成绩单(表格形式)
    cout << "姓名";

    //使用for循环 输出 课程行
    for(int i=0;i<cour_len;i++) cout << '\t' << course[i];

    cout << endl;

    for(int r=0; r<name_len; r++)   //外循环控制 行
    {
        // 输出学生 名字
        cout << name[r];
        // 内循环控制 列
        for(int c=0; c<cour_len; c++) cout << '\t' << scores[r][c];
        cout << endl;

    }




}