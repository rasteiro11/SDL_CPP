#ifndef _POINT
#define _POINT
#include <SDL2/SDL.h>
class Point : public SDL_Rect {
public:
  Point(int x, int y, size_t thickness);
  Point(int x, int y);
  int getX();
  int getY();
};
#endif
