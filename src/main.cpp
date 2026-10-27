#include <raylib.h>


int main()
{
    InitWindow(1280, 720, "raylib + ImGui");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        float dt = GetFrameTime();

        BeginDrawing();

        ClearBackground(RAYWHITE);
        DrawText("Test", 100, 100, 50, GREEN);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
