//
//  Shape.hpp
//  task_02_homework
//
//  Created by Ralitsa Toneva on 14.02.24.
//

#ifndef Shape_hpp
#define Shape_hpp

#include <stdio.h>
#include <SDL2/SDL.h>
class Shape{
public:
    static void drawPentagon(SDL_Renderer* renderer, int centerX, int centerY, int radius);
};
#endif /* Shape_hpp */
