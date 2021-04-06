#pragma once
#include <string>
#include <Windows.h>

bool RegeditNotifyChanged(HKEY hKey_, std::wstring path_);
void ShowTrayIconWnd(const std::wstring& processName);
void ShowTrayIconWndEx(const std::wstring& processName);
void testTotalCpu();
std::wstring GetFileVersion(const WCHAR* filename);
// 获取磁盘空间
void printDiskSpace();
// 创建进程
DWORD WINAPI MyCreateProcess(LPVOID pCmd);
// 监听卸载注册表
bool RegeditSubkeyChanged(HKEY hKey_, std::wstring path_);