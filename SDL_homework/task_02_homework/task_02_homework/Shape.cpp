//
//  Shape.cpp
//  task_02_homework
//
//  Created by Ralitsa Toneva on 14.02.24.
//

#include "Shape.hpp"

void Shape::drawPentagon(SDL_Renderer* renderer, int centerX, int centerY, int radius) {
    SDL_SetRenderDrawColor(renderer, 0x00, 0x00, 0xFF, 0xFF); // Син цвят
    for (int i = 0; i < 5; ++i) {
        int x1 = centerX + radius * cos(2 * 3.14 * i / 5);
        int y1 = centerY + radius * sin(2 * 3.14 * i / 5);
        int x2 = centerX + radius * cos(2 * 3.14 * (i + 1) / 5);
        int y2 = centerY + radius * sin(2 * 3.14 * (i + 1) / 5);
        SDL_RenderDrawLine(renderer, x1, y1, x2, y2);
    }
}
