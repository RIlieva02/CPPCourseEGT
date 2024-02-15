//
//  main.cpp
//  task_07_homework
//
//  Created by Ralitsa Toneva on 15.02.24.
//

#include <iostream>
#include "Game.hpp"

int main() {
   
    Game game;
        if (game.Initialize("FOX", 640, 480)) {
            game.Run();
            game.Shutdown();
        } else {
            std::cerr << "Грешка при инициализация на играта." << std::endl;
            return -1;
        }
    return 0;
}
