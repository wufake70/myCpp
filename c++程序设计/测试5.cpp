#include<iostream>
#include<string>
using namespace std;

// 输入字符返回对应键盘码
int keyCode(string k)
{
    // 用数组分别 存储
    // 这里 """ 用 \" 表示
    string chars[] {"F1","F2","F3","F4","F5","F6","F7","F8","F9","F10","F11","F12","ScrollLock","Print","Pause","`","~","!","@","#","$","%","^","&","*","(",")","-","+","1","2","3","4","5","6","7","8","9","0","_","=","Backspace","Tab","CapsLock","Shift","q","w","e","r","t","y","u","i","o","p","[","]","Q","W","E","R","T","Y","U","I","O","P","{","}","a","s","d","f","g","h","j","k","l",";","'","","A","S","D","F","G","H","J","K","L",":","\"","|","z","x","c","v","b","n","m",",",".","/","Z","X","C","V","B","N","M","<",">","?","Control","OS","Alt","","ContextMenu","Enter","Insert","Delete","Home","End","PageUp","PageDown","ArrowUp","ArrowRight","ArrowDown","ArrowLeft","NumLock","/","*","-","+","Enter","0",".","1","2","3","4","5","6","7","8","9"};
    int kc[] {112,113,114,115,116,117,118,119,120,121,122,123,145,42,19,192,192,49,50,51,52,53,54,55,56,57,48,173,61,49,50,51,52,53,54,55,56,57,48,173,61,8,9,20,16,81,87,69,82,84,89,85,73,79,80,219,221,81,87,69,82,84,89,85,73,79,80,219,221,65,83,68,70,71,72,74,75,76,59,222,220,65,83,68,70,71,72,74,75,76,59,222,220,90,88,67,86,66,78,77,188,190,191,90,88,67,86,66,78,77,188,190,191,17,91,18,32,93,13,45,46,36,35,33,34,38,39,40,37,144,111,106,109,107,13,96,110,97,98,99,100,101,102,103,104,105};

    for(int i=0;i<146;i++)
    {
        if(k==chars[i]) return kc[i]; 
    }
    cout << "未找到....";
    return 400;

}


int main()
{
    int a = keyCode("F1");
    cout << a << endl;

}