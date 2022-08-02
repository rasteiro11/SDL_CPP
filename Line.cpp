#include "Line.h"

Line::Line(SDL_Renderer *renderer, Point *p1, Point *p2) {
  SDL_RenderDrawLine(renderer, p1->getX(), p1->getY(), p2->getX(), p2->getY());
}
