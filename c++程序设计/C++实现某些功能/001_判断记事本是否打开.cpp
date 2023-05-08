#include <Windows.h>
#include <iostream>
using namespace std;

int main()
{
    // 获取窗口的句柄
/*
  FindWindow(类名，窗口标题) 该函数 只要知道一个参数，另外一个可设为 NULL 即可获取 相应窗口的句柄。
  使用 tasklist /fo list /fi "imagename eq vlc.exe" 获取窗口标题
  
  */

  HWND hWnd = FindWindow("Notepad", "无标题 - 记事本");
  hWnd = FindWindow(NULL, "New Chat — Mozilla Firefox");  // 火狐浏览器
  if (hWnd == NULL)
  {
    // Window not found
	cout << "未找到" << endl;
  }
  else
  {
    // Window found
	cout << "找到了" << endl;

  }
  return 0;
}
