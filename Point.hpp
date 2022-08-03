#ifndef _POINT
#define _POINT
#include <SDL2/SDL.h>
#include <SDL2/SDL_rect.h>
class Point : public SDL_FRect {
public:
  Point(float x, float y, size_t thickness);
  Point(float x, float y);
  float getX();
  float getY();
};
#endif
