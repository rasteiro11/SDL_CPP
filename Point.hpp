#ifndef _POINT
#define _POINT
#include <SDL2/SDL.h>
#include <SDL2/SDL_rect.h>
class Point : public SDL_FRect {
public:
  Point(float x, float y, size_t thickness) {

    this->x = x;
    this->y = y;
    this->h = thickness;
    this->w = thickness;
  }
  Point(float x, float y) {
    this->x = x;
    this->y = y;
    this->h = 1;
    this->w = 1;
  }
  float getX() { return x; }
  float getY() { return y; }
};
#endif
