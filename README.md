# ![f0be838d2f6343d8811473bfa80bb67b_1](https://github.com/BeardedManZhao/WinMicrophone/assets/113756063/431aa4f6-4959-489c-a9a7-85d98e431731) WinMicrophone

Windows 系统的 麦克风设备（启用/禁用）切换驱动！它是小巧且快速的，它能够自动的检测并切换麦克风的情况。

您可以在[软件包仓库](https://github.com/BeardedManZhao/WinMicrophone/releases)中找到发布版本的exe包，无需安装！其能够大大增大您在Windows中的麦克风操作便捷性，解放双手！

<hr>

Switch drivers for Windows microphone devices (enable/disable)! It is compact and fast, and can automatically detect and
switch microphone conditions.

You can find the [released](https://github.com/BeardedManZhao/WinMicrophone/releases) version of the exe package in the package repository, no need to install it! It can greatly
increase the convenience of microphone operation in Windows, freeing up your hands!

## 如何使用

当您下载了包之后，其中包含两个文件，一个是 `WinMicrophone.exe` 另一个是 `downloadDLL-wget.bat` & `downloadDLL-curl.bat`
他们的作用如下所示。

| 文件名                  | 是否必须启动 | 作用                                                        |
|----------------------|--------|-----------------------------------------------------------|
| WinMicrophone.exe    | yes    | 用于进行 Windows 麦克风状态切换的程序                                   |
| downloadDLL-wget.bat | no     | 当 `WinMicrophone.exe` 的启动出现 dll 缺失的问题时，请双击此脚本等待 dll 下载    |
| downloadDLL-curl.bat | no     | 当 `downloadDLL-wget.bat` 的工作出现错误时，您可以双击此脚本尝试下载，这是一个备用下载方案 |
