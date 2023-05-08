#include <windows.h>

int main() {
  
  // 获取窗口的句柄
  /*
  FindWindow(类名，窗口标题) 该函数 只要知道一个参数，另外一个可设为 NULL 即可获取 相应窗口的句柄。
  使用 tasklist /fo list /fi "imagename eq vlc.exe" 获取窗口标题
  
  */

//    HWND hwnd = FindWindow("Notepad", "无标题 - 记事本");                     // 获取记事本程序的窗口句柄
//    HWND hwnd = FindWindow(NULL, "New Chat — Mozilla Firefox");               // 火狐窗口
    HWND hwnd = FindWindow(NULL, "异类 + 华晨宇.flac - VLC media player");      // vlc 播放器

  // 激活记事本程序的窗口
  SetForegroundWindow(hwnd);

  return 0;
}
