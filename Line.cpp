#include "Line.h"
#include "Point.h"
#include <SDL2/SDL_render.h>
#include <iostream>

Line::Line(SDL_Renderer *renderer, Point *p1, Point *p2) {
  SDL_RenderDrawLine(renderer, p1->getX(), p1->getY(), p2->getX(), p2->getY());
}

void Line::renderLine(SDL_Renderer *renderer, Point *p1, Point *p2) {
  float m = (float)std::abs(p1->getY() - p2->getY()) /
            std::abs((p1->getX() - p2->getX()));
  float b = (float)p1->getY() - (m * (float)p1->getX());
  std::cout << "M: " << m << std::endl;
  std::cout << "b: " << b << std::endl;
  float x = p1->getX();
  float y = p1->getY();
  if (x < p2->getX()) {
    while (x < p2->getX()) {
      SDL_RenderDrawRect(renderer, new Point(x, y, 1));
      x += 1;
      y = m * x + b;
    }
  } else {
    while (x > p2->getX()) {
      SDL_RenderDrawRect(renderer, new Point(x, y, 1));
      x -= 1;
      y = m * x + b;
    }
  }
}
