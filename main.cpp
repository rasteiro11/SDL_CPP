#include "Line.hpp"
#include "Point.hpp"
#include "Window.hpp"

int main(int argc, char **args) {

  Window *window = new Window(800, 600, "42069 screen");

  SDL_Event event;
  bool quit = false;

  while (!quit) {
    window->handleEvents(&quit);
    window->render();
  }
  delete window;
}
