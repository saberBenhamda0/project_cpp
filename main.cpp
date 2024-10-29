#include <raylib.h>

int main()
{
    // Initialization
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "raylib C++ setup test");

    SetTargetFPS(60);

    // Main game loop
    while (!WindowShouldClose()) // Detect window close button or ESC key
    {
        // Update
        // (place game logic here)

        // Draw
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Congrats! raylib is working in C++!", 190, 200, 20, LIGHTGRAY);
        EndDrawing();
    }

    // De-Initialization
    CloseWindow();

    return 0;
}
