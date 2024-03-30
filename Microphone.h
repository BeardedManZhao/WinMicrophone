//
// Created by zhao on 2024/3/30.
//

#include <windows.h>
#include <cstdio>
#include "string"
#include <mmdeviceapi.h>
#include <endpointvolume.h>
#include <locale>
#include <codecvt>
#include "combaseapi.h"

#ifndef WINMICROPHONE_MICROPHONE_H
#define WINMICROPHONE_MICROPHONE_H


/**
 * 麦克风设备类！
 */
class Microphone {

public:

    /**
     *
     * @return 如果设备被禁用了，则在这里会直接返回 true，反之则返回 false
     *
     * If the device is disabled, it will directly return true here, otherwise it will return false
     */
    static BOOL IsMicrophoneMuted();

    /**
     *
     * @param enable 如果您要启动设备，则在这里设置为 true 反之设置为 false
     *
     * If you want to start the device, set it to true here, otherwise set it to false
     */
    static void EnableOrDisableMicrophone(BOOL enable);
};


#endif //WINMICROPHONE_MICROPHONE_H
