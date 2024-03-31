# ![f0be838d2f6343d8811473bfa80bb67b_1](https://github.com/BeardedManZhao/WinMicrophone/assets/113756063/431aa4f6-4959-489c-a9a7-85d98e431731) WinMicrophone

Windows 系统的 麦克风设备（启用/禁用）切换驱动！它是小巧且快速的，它能够自动的检测并切换麦克风的情况。

您可以在[软件包仓库](https://github.com/BeardedManZhao/WinMicrophone/releases)
中找到发布版本的exe包，无需安装！其能够大大增大您在Windows中的麦克风操作便捷性，解放双手！

<hr>

Switch drivers for Windows microphone devices (enable/disable)! It is compact and fast, and can automatically detect and
switch microphone conditions.

You can find the [released](https://github.com/BeardedManZhao/WinMicrophone/releases) version of the exe package in the
package repository, no need to install it! It can greatly
increase the convenience of microphone operation in Windows, freeing up your hands!

## 如何使用

当您下载了包之后，其中包含两个文件，一个是 `WinMicrophone.exe` 另一个是 `downloadDLL-wget.bat` & `downloadDLL-curl.bat`
他们的作用如下所示。

| 文件名                  | 是否必须启动 | 作用                                                        |
|----------------------|--------|-----------------------------------------------------------|
| WinMicrophone.exe    | yes    | 用于进行 Windows 麦克风状态切换的程序                                   |
| downloadDLL-wget.bat | no     | 当 `WinMicrophone.exe` 的启动出现 dll 缺失的问题时，请双击此脚本等待 dll 下载    |
| downloadDLL-curl.bat | no     | 当 `downloadDLL-wget.bat` 的工作出现错误时，您可以双击此脚本尝试下载，这是一个备用下载方案 |

## 安装教程

### 解压软件包

首先我们可以将从网站中[下载下来的安装包](https://github.com/BeardedManZhao/WinMicrophone/releases/download/1.0.0/WinMicrophone-Windows64.zip)
，进行解压，解压之后，我们可以尝试双击启动一下，看看能否正常工作

![image](https://github.com/BeardedManZhao/WinMicrophone/assets/113756063/8a244c52-0be3-4f0b-b9dc-59102ca92e59) ![image](https://github.com/BeardedManZhao/WinMicrophone/assets/113756063/4830a59d-0591-4aeb-b8f8-3bfab4f08a3a)

如果出现了上面展示的错误，请您点击目录中的 `downloadDLL-wget.bat` 或者 `downloadDLL-curl.bat`
文件进行基础环境的自动部署，您无需担心，它只会操作在您的 WinMicrophone 安装目录中，点击之后会出现下面的情况！
> 在这里我们点击的是 `downloadDLL-wget.bat` 另一个效果也差不多！ 这是在自动的下载需要的库文件，下载完毕之后，就会展示为下面的样子！
![image](https://github.com/BeardedManZhao/WinMicrophone/assets/113756063/d116e88c-cdd6-4ed4-8558-fbec91042e88)

## 运行程序

### 点击运行程序

当一切就绪后，我们点击程序之后，它会自动的检查并切换您的麦克风设备状态，这个设备如果是禁用情况，则会自动启用麦克风，如果是启用情况，则会自动的禁用麦克风！

![image](https://github.com/BeardedManZhao/WinMicrophone/assets/113756063/83ee7d43-9745-4b65-84f0-d675802a7a1c)

### 使用命令或 bat 脚本运行程序

#### 直接运行

我们只需要直接将 `WinMicrophone.exe` 的路径输入到脚本中即可直接打开程序，效果与双击打开是一致的，通常情况下，您可以通过此方法将麦克风效果提供给您的程序使用！

```shell
[这里是您的路径]\WinMicrophone.exe
```

#### NoPrint 参数

如果您不满足程序在切换状态之后会自动显示弹窗的效果，您完全可以在启动命令的后面追加 `NoPrint`
这样就可以实现切换麦克风但是不打印的效果啦！下面是一个示例

```shell
[这里是您的路径]\WinMicrophone.exe NoPrint
NoPrint
(^_^) Microphone enabled!

[这里是您的路径]\WinMicrophone.exe NoPrint
NoPrint
(x_x) Microphone disabled!
```

#### v 参数

您还可以指定 `v` 来打印出版本号！
```shell
[这里是您的路径]\WinMicrophone.exe v
WinMicrophone-V1.0.1
https://github.com/BeardedManZhao/WinMicrophone.git
```

## 更新记录

### 1.0.1 新增打印信息
- 支持通过运行参数来决定程序的弹窗和打印的数据
