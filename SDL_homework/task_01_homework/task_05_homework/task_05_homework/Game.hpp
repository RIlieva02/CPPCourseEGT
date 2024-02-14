//
//  Game.hpp
//  task_05_homework
//
//  Created by Ralitsa Toneva on 14.02.24.
//

#ifndef Game_hpp
#define Game_hpp

#include <stdio.h>
#include <iostream>
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
    bool isClickableTextureClicked(SDL_Texture* t, SDL_Rect* r, int xDown, int yDown, int xUp, int yUp);
private:
    SDL_Window* window = NULL;
    SDL_Renderer* renderer = NULL;
    bool running;
   
    SDL_Texture* clickableTexture;
    SDL_Rect clickableRect;
    
    int mouseDownX, mouseDownY;
};
#endif /* Game_hpp */
