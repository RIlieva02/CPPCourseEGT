//
//  Game.hpp
//  task_08_homework
//
//  Created by Ralitsa Toneva on 14.02.24.
//

#ifndef Game_hpp
#define Game_hpp

#include <stdio.h>
#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2_image/SDL_image.h>
#include "TextureManager.hpp"

class Game {
public:
    Game();
    ~Game();
    bool init(const char* title, int xpos, int ypos, int width, int height, int flags);
    void render();
    void update();
    void handleEvents();
    void clean();
    bool isRunning();
private:
    SDL_Window* window = NULL;
    SDL_Renderer* renderer = NULL;
    bool running;
    int currentFrame;
};
#endif /* Game_hpp */
