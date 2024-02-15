//
//  Game.cpp
//  task_07_homework
//
//  Created by Ralitsa Toneva on 15.02.24.
//

#include "Game.hpp"

Game::Game() : window(nullptr), renderer(nullptr), draggableTexture(nullptr), running(false) {}

bool Game::Initialize(const char* title, int width, int height) {
    // Инициализация на SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cout << "Грешка при инициализация на SDL: " << std::endl;
        return false;
    }

    // Инициализация на SDL_image
    if (!(IMG_Init(IMG_INIT_PNG) & IMG_INIT_PNG)) {
        std::cout << "Грешка при инициализация на SDL_image: " << std::endl;
        return false;
    }

    // Създаване на прозорец и рендерер
    window = SDL_CreateWindow(title, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, height, SDL_WINDOW_SHOWN);
    if (window == nullptr) {
        std::cout << "Грешка при създаване на прозорец: " << std::endl;
        return false;
    }
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    if (renderer == nullptr) {
        std::cout << "Грешка при създаване на рендерер: " << std::endl;
        return false;
    }

    // Зареждане на текстурата
    SDL_Surface* surface = IMG_Load("/Users/ralitsatoneva/Documents/Git_C++_Course/Ralitsa_Course_CPP/SDL_homework/task_07_homework/task_07_homework/fox.png");
    if (surface == nullptr) {
        std::cout << "Грешка при зареждане на картинка: " << std::endl;
        return false;
    }
    draggableTexture = SDL_CreateTextureFromSurface(renderer, surface);
    SDL_FreeSurface(surface);
    if (draggableTexture == nullptr) {
        std::cout << "Грешка при създаване на текстура: " << std::endl;
        return false;
    }

    // Установяване на началните координати на картинката
    draggableRect.x = 100;
    draggableRect.y = 100;
    SDL_QueryTexture(draggableTexture, nullptr, nullptr, &draggableRect.w, &draggableRect.h);

    running = true;
    return true;
}

void Game::handleEvents() {
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
        switch (event.type) {
            case SDL_QUIT:
                running = false;
                break;
            case SDL_KEYDOWN:
                // Актуализирайте позицията на картинката в зависимост от натиснатия клавиш
                switch (event.key.keysym.sym) {
                    case SDLK_UP:
                        draggableRect.y -= 5; // Преместване нагоре
                        break;
                    case SDLK_DOWN:
                        draggableRect.y += 5; // Преместване надолу
                        break;
                    case SDLK_LEFT:
                        draggableRect.x -= 5; // Преместване наляво
                        break;
                    case SDLK_RIGHT:
                        draggableRect.x += 5; // Преместване надясно
                        break;
                    default:
                        break;
                }
                break;
            default:
                break;
        }
    }
}

void Game::Render() {
    SDL_RenderClear(renderer);
    SDL_RenderCopy(renderer, draggableTexture, nullptr, &draggableRect);
    SDL_RenderPresent(renderer);
}

void Game::Run() {
    while (running) {
        handleEvents();
        Render();
    }
}

void Game::Shutdown() {
    // Освобождаване на използваните ресурси
    SDL_DestroyTexture(draggableTexture);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);

    // Затваряне на SDL_image и SDL
    IMG_Quit();
    SDL_Quit();
}
