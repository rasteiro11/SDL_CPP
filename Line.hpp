#ifndef _LINE
#define _LINE
#include "Point.hpp"
#include <cmath>
#include <iostream>
class Line {
public:
  Line(SDL_Renderer *renderer, Point *p1, Point *p2);
  static void renderNaiveLine(SDL_Renderer *renderer, Point p1, Point p2);
  static void renderLineTest(SDL_Renderer *renderer, Point p1, Point p2);
  static void renderDDALine(SDL_Renderer *renderer, Point p1, Point p2);
};
#endif
