#include "Point.h"

Point::Point(int x, int y, size_t thickness) {
  this->x = x;
  this->y = y;
  this->h = thickness;
  this->w = thickness;
}
Point::Point(int x, int y) {
  this->x = x;
  this->y = y;
  this->h = 5;
  this->w = 5;
}
int Point::getX() { return x; }
int Point::getY() { return y; }
