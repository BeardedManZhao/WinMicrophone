@echo off
if exist "WinMicrophone.exe" (
    curl -o ./libgcc_s_seh-1.dll --insecure -k -L https://github.com/BeardedManZhao/WinGW-Bin/releases/download/2024-03-30/libgcc_s_seh-1.dll
    curl -o ./libstdc++-6.dll --insecure -k -L https://github.com/BeardedManZhao/WinGW-Bin/releases/download/2024-03-30/libstdc++-6.dll
    curl -o ./libwinpthread-1.dll --insecure -k -L https://github.com/BeardedManZhao/WinGW-Bin/releases/download/2024-03-30/libwinpthread-1.dll
    echo "Download it now, just open WinMicrophone.exe!"
) else (
    echo "Please open it in the directory with WinMicrophone.exe"
)
pause