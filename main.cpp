#include "Line.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL_rect.h>
#include <SDL2/SDL_render.h>
#include <iostream>
#include <vector>

int main(int argc, char **args) {
  SDL_Window *window =
      SDL_CreateWindow("Getting Started", SDL_WINDOWPOS_UNDEFINED,
                       SDL_WINDOWPOS_UNDEFINED, 800, 600, SDL_WINDOW_SHOWN);

  SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, 0);

  SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
  SDL_RenderClear(renderer);

  SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);

  std::vector<Point *> points = std::vector<Point *>();
  points.push_back(new Point(50, 50));
  points.push_back(new Point(400, 300));

  for (Point *p : points) {
    SDL_RenderFillRect(renderer, p);
  }

  Line(renderer, points[0], points[1]);

  SDL_RenderPresent(renderer);

  SDL_Delay(3000);

  SDL_DestroyRenderer(renderer);

  SDL_DestroyWindow(window);

  SDL_Quit();

  return 0;
}
