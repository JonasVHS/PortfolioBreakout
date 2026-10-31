#include <raylib.h>


int main() {
    const int WINDOW_WIDTH = 1280;
    const int WINDOW_HEIGHT = 720;

    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "raylib + ImGui");
    SetTargetFPS(60);

    Rectangle paddle = { 0, static_cast<float>(WINDOW_HEIGHT - 50), 250, 25 };


    while (!WindowShouldClose()) {
        float dt = GetFrameTime();

        BeginDrawing();

        ClearBackground(DARKGRAY);

        paddle.x = GetMouseX() - paddle.width / 2.0f;
        if (IsWindowFocused()) {
            DrawRectangleRec(paddle, DARKBLUE);
        }

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
