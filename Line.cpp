#include "Line.h"
#include "Point.h"
#include <SDL2/SDL_render.h>
#include <cmath>
#include <iostream>

Line::Line(SDL_Renderer *renderer, Point *p1, Point *p2) {
  SDL_RenderDrawLine(renderer, p1->getX(), p1->getY(), p2->getX(), p2->getY());
}

void Line::renderLine(SDL_Renderer *renderer, Point p1, Point p2) {
  float dx = p2.getX() - p1.getX();
  float dy = p2.getY() - p1.getY();
  if (std::abs(dx) > std::abs(dy)) {
    // Line is horizontal
    if (p1.x > p2.x) {
      Point temp = p1;
      p1 = temp;
      temp = p2;
    }
    float m = dy / dx;
    float x = p1.x;
    float y = p1.y;
    while (x < p2.x) {
      SDL_RenderFillRectF(renderer, new Point(x, y, 1));
      x++;
      y += m;
    }
  } else {
    // Line is vertical
    if (p1.y > p2.y) {
      Point temp = p1;
      p1 = temp;
      temp = p2;
    }
    float m = dx / dy;
    float x = p1.x;
    float y = p1.y;
    while (y < p2.y) {
      SDL_RenderFillRectF(renderer, new Point(x, y, 1));
      y++;
      x += m;
    }
  }
}
