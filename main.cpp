#include <iostream>
#include <raylib.h>
#include "Icons.h"


int main(int argc, char** argv) {
    InitWindow(800, 600, "carpi");
    SetTargetFPS(30);
    while(!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(BLACK);
        // bt
        Icons::bluetoothEnabled(20, 20, 16, 16);
        Icons::bluetoothDisabled(80, 20, 16, 16);
        Icons::bluetoothEnabled(140, 20, 8, 8);
        Icons::bluetoothDisabled(200, 20, 8, 8);
        Icons::bluetoothEnabled(260, 20, 32, 32);
        Icons::bluetoothDisabled(340, 20, 32, 32);
        // gps
        Icons::gpsUnFixed(20, 100, 16, 16);
        Icons::gpsFixed(80, 100, 16, 16);
        Icons::gpsUnFixed(140, 100, 8, 8);
        Icons::gpsFixed(200, 100, 8, 8);
        Icons::gpsUnFixed(260, 100, 32, 32);
        Icons::gpsFixed(340, 100, 32, 32);
        // wifi
        Icons::wifiEnabled(20, 180, 16, 16);
        Icons::wifiDisabled(80, 180, 16, 16);
        Icons::wifiEnabled(140, 180, 8, 8);
        Icons::wifiDisabled(200, 180, 8, 8);
        Icons::wifiEnabled(260, 180, 32, 32);
        Icons::wifiDisabled(340, 180, 32, 32);
        // pause
        Icons::pause(20, 260, 8, 8);
        Icons::pause(80, 260, 16, 16);
        Icons::pause(140, 260, 32, 32);
        // play
        Icons::play(20, 340, 8, 8);
        Icons::play(80, 340, 16, 16);
        Icons::play(140, 340, 32, 32);
        // album
        Icons::album(20, 420, 8, 8);
        Icons::album(80, 420, 16, 16);
        Icons::album(140, 420, 32, 32);
        // home
        Icons::home(20, 500, 8, 8);
        Icons::home(80, 500, 16, 16);
        Icons::home(140, 500, 32, 32);
        // navigation
        Icons::navigation(220, 260, 8, 8);
        Icons::navigation(300, 260, 16, 16);
        Icons::navigation(380, 260, 32, 32);

        DrawFPS(8, 576);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}