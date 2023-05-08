#include <Windows.h>
 
int main()
{
    //按下Ctrl键
    // keybd_event(VK_CONTROL, 0, 0, 0);
    //按下V键(注意,当第一个参数为字符时必须用单引号" ' "引起来)
    keybd_event('V', 0, 0, 0);
    //松开V键
    keybd_event('V', 0, 2, 0);
    //松开Ctrl键
    // keybd_event(VK_CONTROL, 0, 2, 0);
 
    return 0;
}