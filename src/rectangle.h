#ifndef INCLUDE_SRC_RECTANGLE_H_
#define INCLUDE_SRC_RECTANGLE_H_

#include <stdint.h>
#include <stdbool.h>

// make the collision 
typedef enum {
  VERTICAL_COLLISION = 1,
  HORIZONTAL_COLLISION = 2
} CollideType;

typedef struct {
  uint16_t xpos;
  uint16_t ypos;
  uint16_t width;
  uint16_t height;
} Rectangle2D;


// FUNCTION PROTOTYPES
// helper function to make a rectangle
Rectangle2D make_rectangle(uint16_t xpos, uint16_t ypos, uint16_t width, uint16_t height);
// checks the collision between two different rectangle 
bool check_collision(Rectangle2D *r1, Rectangle2D *r2);
// returns the type of collision (vertical or horizontal)
CollideType get_collision_type(Rectangle2D *r1, Rectangle2D *r2);
#endif  // INCLUDE_SRC_RECTANGLE_H_
