#include "rectangle.h"

Rectangle make_rectangle(uint16_t xpos, uint16_t ypos, uint16_t width,
                         uint16_t height) {
  return (Rectangle){xpos, ypos, width, height};
}

