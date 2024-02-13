//
//  main.cpp
//  task_01_homework
//
//  Created by Ralitsa Toneva on 11.02.24.
//

#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2_image/SDL_image.h>

const int WINDOW_WIDTH = 1300;
const int WINDOW_HEIGHT = 900;

int main(int argc, char* argv[]) {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cout << "SDL could not initialize!" << std::endl;
        return 1;
    }

    SDL_Window* window = SDL_CreateWindow("FOX", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WINDOW_WIDTH, WINDOW_HEIGHT, SDL_WINDOW_SHOWN);
    if (window == nullptr) {
        std::cout << "Window could not be created!" << std::endl;
        return 1;
    }

    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (renderer == nullptr) {
        std::cout << "Renderer could not be created!" << std::endl;
        return 1;
    }

    SDL_Texture* image = IMG_LoadTexture(renderer, "/Users/ralitsatoneva/Documents/Git_C++_Course/Ralitsa_Course_CPP/SDL_homework/task_01_homework/task_01_homework/images/fox.jpg");
    if (image == nullptr) {
        std::cout << "Image could not be loaded!" << std::endl;
        return 1;
    }

    SDL_Rect imageRect;
    SDL_QueryTexture(image, NULL, NULL, &imageRect.w, &imageRect.h);
    imageRect.x = 0;
    imageRect.y = (WINDOW_HEIGHT - imageRect.h) / 2;

    bool running = true;
    double speed = 0.1;
    int direction = 1;

    while (running) {
        SDL_Event event;
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                running = false;
            }
        }
        if (imageRect.x + imageRect.w >= WINDOW_WIDTH || imageRect.x <= 0) {
            direction *= -1;
        }

        imageRect.x += speed * direction;

        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        SDL_RenderClear(renderer);
        SDL_RenderCopy(renderer, image, NULL, &imageRect); 
        SDL_RenderPresent(renderer);

        speed += 0.1;
        // Kогато скоростат стигне до 50 я връщаме в начална позиция
        if (speed >= 50){
            speed = 0.1;
        }

       SDL_Delay(16);
    }

    SDL_DestroyTexture(image);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}



