//
//  Game.cpp
//  task_05_homework
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

                TextureManager::Instance()->loadTexture("/Users/ralitsatoneva/Documents/Git_C++_Course/Ralitsa_Course_CPP/SDL_homework/task_05_homework/task_05_homework/Image/blue.png", "blue", renderer);
                TextureManager::Instance()->loadTexture("/Users/ralitsatoneva/Documents/Git_C++_Course/Ralitsa_Course_CPP/SDL_homework/task_05_homework/task_05_homework/Image/red.png", "red", renderer);
                TextureManager::Instance()->loadTexture("/Users/ralitsatoneva/Documents/Git_C++_Course/Ralitsa_Course_CPP/SDL_homework/task_05_homework/task_05_homework/Image/yellow.png", "yellow", renderer);
                TextureManager::Instance()->loadTexture("/Users/ralitsatoneva/Documents/Git_C++_Course/Ralitsa_Course_CPP/SDL_homework/task_05_homework/task_05_homework/Image/green.png", "green", renderer);
                

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
    
    TextureManager::Instance()->drawTexture("blue", 0, 200, 300, 400, renderer, SDL_FLIP_VERTICAL);
    TextureManager::Instance()->drawTexture("red", 0, 0, 300, 200, renderer, SDL_FLIP_VERTICAL);
    TextureManager::Instance()->drawTexture("yellow", 300, 200, 600, 200, renderer, SDL_FLIP_VERTICAL);
    TextureManager::Instance()->drawTexture("green", 300, 0, 600, 200, renderer, SDL_FLIP_VERTICAL);
    
    int ww, wh;
    SDL_GetWindowSize(window, &ww, &wh);

    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderDrawLine(renderer, 0, wh / 2, ww, wh / 2);

    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderDrawLine(renderer, ww / 2, wh / 200, ww / 2, wh * 200);
    
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

void Game::update() {
    clickableRect.x = 100;
    clickableRect.y = 100;
    SDL_QueryTexture(clickableTexture, nullptr, nullptr, &clickableRect.w, &clickableRect.h);
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
}

Game::~Game() {

}
