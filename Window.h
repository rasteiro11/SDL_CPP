#ifndef _WINDOW
#define _WINDOW
#include "Line.h"
#include "Point.h"
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
