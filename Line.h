#ifndef _LINE
#define _LINE
#include "Point.h"
#include <cmath>
#include <iostream>
class Line {
public:
  Line(SDL_Renderer *renderer, Point *p1, Point *p2);
  static void renderLine(SDL_Renderer *renderer, Point p1, Point p2);
};
#endif
