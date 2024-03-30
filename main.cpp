#include <windows.h>
#include <cstdio>
#include "string"
#include <locale>
#include <codecvt>
#include "Microphone.h"
#pragma comment(lib, "comsupp.lib")
#pragma comment(lib, "uuid.lib")

int main(int argc, char *args[]) {
//    EnableOrDisableMicrophone(TRUE);  // Enable microphone
//    Sleep(5000);                      // Wait for 5 seconds
//    EnableOrDisableMicrophone(FALSE); // Disable microphone
    // 使用自动检测
    const BOOL r = Microphone::IsMicrophoneMuted();
    Microphone::EnableOrDisableMicrophone(r);
    // 接下决定要不要弹窗
    if (argc <= 1 || strcmp(args[1], "NoPrint") != 0) {
        // 将 UTF-8 字符串转换为 ANSI 字符串
        std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
        std::wstring wide_str = converter.from_bytes(r ? "(x_x) 麦克风已禁用" : "(^_^) 麦克风已启用");
        const wchar_t *ansi_str = wide_str.c_str();
        std::wstring wide_str_title = converter.from_bytes("WinMicrophone.lingYuZhao.top");
        const wchar_t *ansi_str_title = wide_str_title.c_str();

        // 代表有输入参数 看看输入的是不是一个 NoPrint 如果是就代表不通知
        MessageBoxW(nullptr, ansi_str, reinterpret_cast<LPCWSTR>(ansi_str_title), MB_ICONINFORMATION);
    } else {
        printf("%s\n", args[1]);
        printf(r ? "(x_x) Microphone disabled!" : "(^_^) Microphone enabled!");
    }
    return 0;
}