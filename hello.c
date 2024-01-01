#include <raylib.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    InitWindow(800, 600, "raylib hello world");

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Hello, World and you ;-)", 190, 200, 20, LIGHTGRAY);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
