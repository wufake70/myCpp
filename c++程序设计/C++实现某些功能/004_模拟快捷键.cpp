#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    // // // 模拟 Ctrl + C 的快捷键
    // keybd_event(VK_CONTROL, 0, 0, 0);
    // keybd_event('c', 0, 0, 0);
    // keybd_event(VK_CONTROL, 0, KEYEVENTF_KEYUP, 0);
    // keybd_event(VkKeyScan('C'), 0, KEYEVENTF_KEYUP, 0);

    // // 模拟 Ctrl + V 的快捷键
    // keybd_event(VK_LWIN , 0, 0, 0);
    // keybd_event(VK_TAB, 0, 0, 0);
    // keybd_event(VK_LWIN, 0, KEYEVENTF_KEYUP, 0);
    // keybd_event(VK_TAB, 0, KEYEVENTF_KEYUP, 0); 

    keybd_event(91, 0, 0, 0);
    keybd_event('L', 0, 0, 0);
    keybd_event(91, 0, KEYEVENTF_KEYUP, 0);
    keybd_event('L', 0, KEYEVENTF_KEYUP, 0);

    return 0;
    
}
