//
//  Game.cpp
//  task_03_homework
//
//  Created by Ralitsa Toneva on 14.02.24.
//

#include "Game.hpp"

bool Game::init(const char* title, int xpos, int ypos, int width, int height, int flags) {

    if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {
        std::cout << "SDL init success\n";

        window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
        if (window != 0) //window init success
        {
            std::cout << "window creation success\n";
            renderer = SDL_CreateRenderer(window, -1, 0);
            if (renderer != 0) //renderer init success
            {
                std::cout << "renderer creation success\n";
                SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);

            }
            else {
                std::cout << "renderer init failed\n";
                return false;
            }
        }
        else {
            std::cout << "window init failed\n";
            return false;
        }
    }
    else {
        std::cout << "SDL init fail\n";
        return false;
    }
    std::cout << "init success\n";
    running = true;
    return true;
}

void Game::render() {
    SDL_SetRenderDrawColor(renderer, 0x00, 0x00, 0x00, 255);
    SDL_RenderClear(renderer);
    
    int centerX = 600 / 2;
    int centerY = 400 / 2;
    int radius = 100;
    Shape::drawHexagon(renderer, centerX, centerY, radius);
    
    SDL_RenderPresent(renderer);
}

void Game::handleEvents() {
    SDL_Event event;
    if (SDL_PollEvent(&event)) {
        switch (event.type) {
            case SDL_QUIT: running = false; break;
            default: break;
        }
    }
}

void Game::clean() {
    std::cout << "cleaning game\n";
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
}

bool Game::isRunning() {
    return Game::running;
}

Game::Game() {
    Game::window = NULL;
    Game::renderer = NULL;
    Game::running = true;
    Game::currentFrame = 0;
}

Game::~Game() {

}
