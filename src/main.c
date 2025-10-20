#include "../include/raylib.h"
#include "game.h"
#include <stdint.h>

#define DEF_SCREEN_WIDTH 800
#define DEF_SCREEN_HEIGHT 800
#define WINDOW_TITLE "BREAKOUT"

int main(void) {
  SetConfigFlags(FLAG_WINDOW_RESIZABLE);
  InitWindow(DEF_SCREEN_WIDTH, DEF_SCREEN_HEIGHT, WINDOW_TITLE);
  SetTargetFPS(60);
  // main game loop
  while (!WindowShouldClose()) {
    // == DRAW ==
    BeginDrawing();
    ClearBackground(BLACK);
    // get the current window dimensions, draw everything in terms of those dimensions
    Window window = get_screen_window();
    const int width = 10;
    const int height = 10;
    DrawRectangle(window.x / 2 - width/2, window.y / 2 - height/2, width, height, WHITE);
    EndDrawing();
  }
  // Cleanup window
  CloseWindow();
  return 0;
}
