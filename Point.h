#include <SDL2/SDL.h>

#ifndef _POINT
class Point : public SDL_Rect {
public:
  Point(int x, int y, size_t thickness);
  Point(int x, int y);
  int getX();
  int getY();
};
#endif
