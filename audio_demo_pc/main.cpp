//============================================================================
// Name        : audio_demo_pc
// Author      : Ping Hsu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <windows.h>  // Windows 專用 API

int main() {
    // 音階名稱 + 對應頻率（C 大調）
    const char* notes[] = { "Do", "Re", "Mi", "Fa", "So", "La", "Ti", "Do" };
    int frequencies[] =    { 262, 294, 330, 349, 392, 440, 494, 523 };  // Hz

    const int duration = 400; // 每個音符播放 400 毫秒

    for (int i = 0; i < 8; ++i) {
        std::cout << notes[i] << " 🎵" << std::endl;
        Beep(frequencies[i], duration);
        Sleep(100); // 稍微停頓一下
    }

    return 0;
}

