//
//  Circle.cpp
//  CodingTasks_Inheritance_Homework
//
//  Created by Ralitsa Toneva on 16.02.24.
//

#include "Circle.hpp"

Circle::Circle(std::string color) : Shape(color){ }

void Circle::draw(){
    std::cout << "Drawing a " << getColor() << " circle" << std::endl;
}
