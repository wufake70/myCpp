#include <Windows.h>
#include <iostream>
#include <string>
using namespace std;

// 用数组分别 存储
// 单字符(没有 ', '`', '~', '!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '-', '+')
//               (192, 192, 49, 50, 51, 52, 53, 54, 55, 56, 57, 48, 173, 61, )
char simple_chars[]{'1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '_', '=', 'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', '[', ']', 'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P', '{', '}', 'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';', '\\', 'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L', ':', '"', '|', 'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/', 'Z', 'X', 'C', 'V', 'B', 'N', 'M', '<', '>', '?', ' ', '/', '*', '-', '+', '0', '.', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int kc1[]{49, 50, 51, 52, 53, 54, 55, 56, 57, 48, 173, 61, 81, 87, 69, 82, 84, 89, 85, 73, 79, 80, 219, 221, 81, 87, 69, 82, 84, 89, 85, 73, 79, 80, 219, 221, 65, 83, 68, 70, 71, 72, 74, 75, 76, 59, 220, 65, 83, 68, 70, 71, 72, 74, 75, 76, 59, 222, 220, 90, 88, 67, 86, 66, 78, 77, 188, 190, 191, 90, 88, 67, 86, 66, 78, 77, 188, 190, 191, 32, 111, 106, 109, 107, 96, 110, 97, 98, 99, 100, 101, 102, 103, 104, 105};

// 功能键(外加 单引号)
string fun_keys[]{"'", "F1", "F2", "F3", "F4", "F5", "F6", "F7", "F8", "F9", "F10", "F11", "F12", "ScrollLock", "Print", "Pause", "Backspace", "Tab", "CapsLock", "Shift", "Control", "Win", "Alt", "ContextMenu", "Enter", "Insert", "Delete", "Home", "End", "PageUp", "PageDown", "Up", "Right", "Down", "Left", "NumLock", "Enter"};
int kc2[]{222, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 145, 42, 19, 8, 9, 20, 16, 17, 91, 18, 93, 13, 45, 46, 36, 35, 33, 34, 38, 39, 40, 37, 144, 13};

// 输入字符返回对应键盘码 单字符
int keyCode(char k)
{
  for (int i = 0; i < 109; i++)
  {
    if (k == simple_chars[i])
      return kc1[i];
  }
  return 400;
}

// 功能字符
int keyCode2(string k)
{
  for (int i = 0; i < 37; i++)
  {
    if (k == fun_keys[i])
      return kc2[i];
  }
  return 400;
}

void pressKey(string key, int is_fun = 0)   // is_fun 判断功能键
{

  if (!is_fun)
  {
    for (int i = 0; i < key.length(); i++)
    {
      // 获取字符的 ASCII 码
      int kCode = keyCode(key[i]);

      // 模拟按下按键hello world2
      keybd_event(kCode, 0, 0, 0);

      // 模拟松开按键
      keybd_event(kCode, 0, KEYEVENTF_KEYUP, 0);
    }
  }
  else
  {
    // 获取字符的 ASCII 码
    int kCode = keyCode2(key);

    // 模拟按下按键hello world2
    keybd_event(kCode, 0, 0, 0);

    // 模拟松开按键
    keybd_event(kCode, 0, KEYEVENTF_KEYUP, 0);
  }
}

int main()        
{
  // pressKey("hello world");
  // pressKey("Enter",1);
  // pressKey("hello wo are you ?");
  pressKey("Win",1);
  pressKey("Tab",1);
  // Sleep(500);
  pressKey("L",1);    
}

