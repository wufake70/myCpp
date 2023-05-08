#include <iostream>
#include <windows.h>

using namespace std;

int main()
{

    // 这里使用的dos命令
    system("echo hello world | clip");

    keybd_event(VK_CONTROL,0,0,0);
    keybd_event(VkKeyScan('V'),0,0,0);
    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);
    keybd_event(VkKeyScan('v'),0,KEYEVENTF_KEYUP,0);
    //hello world 


    return 0;
    
}
