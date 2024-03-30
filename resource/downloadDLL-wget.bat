@echo off
if exist "WinMicrophone.exe" (
    wget -P ./ https://github.com/BeardedManZhao/WinGW-Bin/releases/download/2024-03-30/libgcc_s_seh-1.dll
    wget -P ./ https://github.com/BeardedManZhao/WinGW-Bin/releases/download/2024-03-30/libstdc++-6.dll
    wget -P ./ https://github.com/BeardedManZhao/WinGW-Bin/releases/download/2024-03-30/libwinpthread-1.dll
    echo "Download it now, just open WinMicrophone.exe!"
) else (
    echo "Please open it in the directory with WinMicrophone.exe"
)

pause