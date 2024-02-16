//
//  Rectangle.cpp
//  CodingTasks_Inheritance_Homework
//
//  Created by Ralitsa Toneva on 16.02.24.
//

#include "Rectangle.hpp"

Rectangle::Rectangle(std::string color) : Shape(color){ }

void Rectangle::draw(){
    std::cout << "Drawing a " << getColor() << " rectangle" << std::endl;
}
