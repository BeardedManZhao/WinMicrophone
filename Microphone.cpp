//
// Created by zhao on 2024/3/30.
//

#include "Microphone.h"


BOOL Microphone::IsMicrophoneMuted() {
    CoInitializeEx(nullptr, COINIT_MULTITHREADED);

    IMMDeviceEnumerator *deviceEnumerator = nullptr;
    CoCreateInstance(__uuidof(MMDeviceEnumerator), nullptr, CLSCTX_ALL, __uuidof(IMMDeviceEnumerator),
                     (LPVOID *) &deviceEnumerator);

    IMMDevice *defaultDevice = nullptr;
    deviceEnumerator->GetDefaultAudioEndpoint(eCapture, eConsole, &defaultDevice);

    IAudioEndpointVolume *endpointVolume = nullptr;
    defaultDevice->Activate(__uuidof(IAudioEndpointVolume), CLSCTX_INPROC_SERVER, nullptr, (LPVOID *) &endpointVolume);

    BOOL isMuted = FALSE;
    endpointVolume->GetMute(&isMuted);

    endpointVolume->Release();
    defaultDevice->Release();
    deviceEnumerator->Release();

    CoUninitialize();

    return isMuted;
}

void Microphone::EnableOrDisableMicrophone(BOOL enable) {
    CoInitializeEx(nullptr, COINIT_MULTITHREADED);

    IMMDeviceEnumerator *deviceEnumerator = nullptr;
    CoCreateInstance(__uuidof(MMDeviceEnumerator), nullptr, CLSCTX_ALL, __uuidof(IMMDeviceEnumerator),
                     (LPVOID *) &deviceEnumerator);

    IMMDevice *defaultDevice = nullptr;
    deviceEnumerator->GetDefaultAudioEndpoint(eCapture, eConsole, &defaultDevice);

    IAudioEndpointVolume *endpointVolume = nullptr;
    defaultDevice->Activate(__uuidof(IAudioEndpointVolume), CLSCTX_INPROC_SERVER, nullptr, (LPVOID *) &endpointVolume);

    if (enable) {
        endpointVolume->SetMute(FALSE, nullptr);
    } else {
        endpointVolume->SetMute(TRUE, nullptr);
    }

    endpointVolume->Release();
    defaultDevice->Release();
    deviceEnumerator->Release();

    CoUninitialize();
}
