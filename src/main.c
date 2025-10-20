#include "../include/raylib.h"
#include <stdlib.h>

#define DEF_SCREEN_WIDTH 800
#define DEF_SCREEN_HEIGHT 800
#define WINDOW_TITLE "Breakout"

int main(void) {
  InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, WINDOW_TITLE);
  SetTargetFPS(60);
  // main game loop
  while (!WindowShouldClose()) {
    // == DRAW ==
    BeginDrawing();
    ClearBackground(BLACK);
    DrawRectangle(SCREEN_WIDTH / 2 , SCREEN_HEIGHT / 2, 2, 2,
                  WHITE);
    EndDrawing();
  }
  // Cleanup window
  CloseWindow();
  return EXIT_SUCCESS;
}
