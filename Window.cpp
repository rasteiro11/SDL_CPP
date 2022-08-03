#include "Window.hpp"
#include "Point.hpp"
#include <SDL2/SDL_events.h>
#include <SDL2/SDL_keycode.h>
#include <SDL2/SDL_render.h>

Window::Window(int width, int height, const std::string &wn) {
  this->window = SDL_CreateWindow(wn.c_str(), SDL_WINDOWPOS_UNDEFINED,
                                  SDL_WINDOWPOS_UNDEFINED, width, height,
                                  SDL_WINDOW_SHOWN);

  this->renderer = SDL_CreateRenderer(window, -1, 0);
}

void Window::handleEvents(bool *quit) {
  SDL_Event event;
  while (SDL_PollEvent(&event)) {
    switch (event.type) {
    case SDL_QUIT: {
      *quit = true;
    }
    case SDL_KEYDOWN: {
      switch (event.key.keysym.sym) {
      case SDLK_ESCAPE:
        *quit = true;
      }
    }
    }
  }
}

void Window::render() {
  SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
  SDL_RenderClear(renderer);

  // std::vector<Point *> points = std::vector<Point *>();
  // points.push_back(new Point(50, 50));
  // points.push_back(new Point(400, 300));

  // for (Point *p : points) {
  //  SDL_RenderFillRect(renderer, p);
  //}

  // Line(renderer, points[0], points[1]);

  // Render Line Testing

  SDL_SetRenderDrawColor(renderer, 255, 255, 0, 255);
  Line::renderLineTest(renderer, *new Point(0, 0), *new Point(400, 300));

  SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
  Line::renderLineTest(renderer, *new Point(400, 300), *new Point(800, 0));

  SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
  Line::renderLineTest(renderer, *new Point(0, 300), *new Point(800, 300));

  // Render Line Using Naive Algorithm

  // SDL_SetRenderDrawColor(renderer, 255, 255, 0, 255);
  // Line::renderNaiveLine(renderer, *new Point(0, 0), *new Point(400, 300));

  // SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
  // Line::renderNaiveLine(renderer, *new Point(400, 300), *new Point(800, 0));

  // SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
  // Line::renderNaiveLine(renderer, *new Point(0, 300), *new Point(800, 300));

  // Render Line Using Digital Differential Analyzer

  //  SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
  //  Line::renderDDALine(renderer, *new Point(0, 0), *new Point(400, 300));
  //
  //  SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
  //  Line::renderDDALine(renderer, *new Point(0, 300), *new Point(800, 300));
  //
  //  SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);
  //  Line::renderDDALine(renderer, *new Point(400, 300), *new Point(800, 0));

  SDL_RenderPresent(renderer);
  SDL_Delay(500);
}

Window::~Window() {
  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);
  SDL_Quit();
}
