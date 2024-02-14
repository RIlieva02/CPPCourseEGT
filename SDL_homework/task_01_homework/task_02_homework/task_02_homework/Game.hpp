//
//  Game.hpp
//  task_02_homework
//
//  Created by Ralitsa Toneva on 14.02.24.
//

#ifndef Game_hpp
#define Game_hpp

#include <stdio.h>
#include <iostream>
#include "Shape.hpp"

class Game{
public:
    Game();
    ~Game();
    bool init(const char* title, int xpos, int ypos, int width, int height, int flags);
    void render();
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
