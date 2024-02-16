//
//  main.cpp
//  CodingTasks_Inheritance_Homework
//
//  Created by Ralitsa Toneva on 16.02.24.
//

#include <iostream>
#include "Circle.hpp"
#include "Rectangle.hpp"

int main(int argc, const char * argv[]) {
    
    Shape *cPtr = new Circle("red");
    Shape *rPtr = new Rectangle("blue");
    
    cPtr->draw();
    rPtr->draw();
    
    return 0;
}
