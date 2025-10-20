#ifndef INCLUDE_SRC_GAME_H_
#define INCLUDE_SRC_GAME_H_
#include <stddef.h>
#include "rectangle.h"

typedef struct {
  int x;
  int y;
} Window;

// level is just a dynamic array of rectangles
typedef struct {
  Rectangle2D *items;
  size_t size;
  size_t capacity;
} Level;

const Window get_screen_window();
#endif  // INCLUDE_SRC_GAME_H_
