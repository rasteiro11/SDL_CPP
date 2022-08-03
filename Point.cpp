#include "Point.hpp"

Point::Point(float x, float y, size_t thickness) {
  this->x = x;
  this->y = y;
  this->h = thickness;
  this->w = thickness;
}
Point::Point(float x, float y) {
  this->x = x;
  this->y = y;
  this->h = 5;
  this->w = 5;
}
float Point::getX() { return x; }
float Point::getY() { return y; }
