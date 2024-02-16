//
//  main.cpp
//  Coding Tasks_Polymorphism_Homework
//
//  Created by Ralitsa Toneva on 16.02.24.
//

#include <iostream>
#include "Circle.hpp"
#include "Rectangle.hpp"

void printArea(Shape* shape) {
    std::cout << "Area: " << shape->area() << std::endl;
}

int main(int argc, const char * argv[]) {
    
    Shape *cPtr = new Circle(10);
    Shape *rPtr = new Rectangle(5, 15);
    
    printArea(cPtr);
    printArea(rPtr);
    
    return 0;
}
