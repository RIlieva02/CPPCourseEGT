//
//  Game.hpp
//  task_07_homework
//
//  Created by Ralitsa Toneva on 15.02.24.
//

#ifndef Game_hpp
#define Game_hpp

#include <stdio.h>
#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2_image/SDL_image.h>

class Game {
public:
    Game();

    bool Initialize(const char* title, int width, int height);
    bool isClickableTextureClicked(int xDown, int yDown, int xUp, int yUp);
    void handleEvents();
    void Render();
    void Run();
    void Shutdown();
    
private:
    SDL_Window* window;
    SDL_Renderer* renderer;
    SDL_Texture* draggableTexture;
    SDL_Rect draggableRect;
    bool running;
};
#endif /* Game_hpp */
