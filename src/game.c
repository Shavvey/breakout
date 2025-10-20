#include "game.h"
#include "../include/raylib.h"

const Window get_screen_window() {
  const int screenWidth = GetScreenWidth();
  const int screenHeight = GetScreenHeight();
  return (Window){.x = screenWidth, .y = screenHeight};
}

