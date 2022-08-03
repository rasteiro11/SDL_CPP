#ifndef _WINDOW
#define _WINDOW
#include "Line.hpp"
#include "Point.hpp"
#include <iostream>
#include <string>
#include <vector>
class Window {
public:
  Window(int width, int height, const std::string &wn);
  ~Window();
  void handleEvents(bool *quit);
  void render();
  SDL_Renderer *renderer;
  SDL_Window *window;
};
#endif
