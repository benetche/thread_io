#include "raylib.h"

int main() {
    const int WindowWidth = 1280;
    const int WindowHeight = 720;

    InitWindow(WindowWidth, WindowHeight, "MyGame");

    SetTargetFPS(60);

    while(!WindowShouldClose()){
        BeginDrawing();

        EndDrawing();
    }
}