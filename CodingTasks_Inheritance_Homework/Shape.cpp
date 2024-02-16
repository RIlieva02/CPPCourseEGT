//
//  Shape.cpp
//  CodingTasks_Inheritance_Homework
//
//  Created by Ralitsa Toneva on 16.02.24.
//

#include "Shape.hpp"

Shape::Shape(std::string color){
    setColor(color);
}
void Shape::setColor(std::string color){
    this->color = color;
}
std::string Shape::getColor() const{
    return this->color;
}
void Shape::draw(){
    std::cout << "Drawing a " << getColor() << " shape" << std::endl;
}
