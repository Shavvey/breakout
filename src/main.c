#include "../include/raylib.h"
#include <stdlib.h>

#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 800
#define WINDOW_TITLE "Breakout!"

int main(void) {
  SetConfigFlags(FLAG_WINDOW_RESIZABLE);
  InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, WINDOW_TITLE);
  SetTargetFPS(60);
  // main game loop
  while (!WindowShouldClose()) {
    ClearBackground(BLACK);
    BeginDrawing();
    DrawRectangle(SCREEN_WIDTH/2 - 10/2, SCREEN_HEIGHT/2 - 10/2, 10, 10, WHITE);
    EndDrawing();
  }
  CloseWindow();
  return EXIT_SUCCESS;
}
