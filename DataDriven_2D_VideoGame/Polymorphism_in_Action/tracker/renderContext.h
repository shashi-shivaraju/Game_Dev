 #include <iostream>
#include <SDL.h>
#include "imageFactory.h"

class RenderContext{
public:
  static RenderContext& getInstance();
  ~RenderContext(); //destructor
  SDL_Window* getWindow() const { return window; }
  SDL_Renderer* getRenderer() const { return renderer; }

  RenderContext(const RenderContext&) = delete; //copy constructor
  RenderContext& operator=(const RenderContext&) = delete;//copy assignment

private:
  
  SDL_Window* window;
  SDL_Renderer* renderer;

  ImageFactory& factory;

  SDL_Window* initWindow();
  SDL_Renderer* initRenderer();
  RenderContext();
};
