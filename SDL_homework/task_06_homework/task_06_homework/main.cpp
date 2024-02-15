//
//  main.cpp
//  task_06_homework
//
//  Created by Ralitsa Toneva on 14.02.24.
//

#include <iostream>
#include "Game.hpp"

Game* game = NULL;
const int WINDOW_WIDTH = 600;
const int WINDOW_HEIGHT = 400;

int main(int argc, char* argv[]) {

    game = new Game();
    game->init("My new window",
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED,
        WINDOW_WIDTH, WINDOW_HEIGHT,
        SDL_WINDOW_RESIZABLE);
    while (game->isRunning()) {
        game->handleEvents();
        game->update();
        game->render();
    }
    game->clean();
}
