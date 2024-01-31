//
//  Rectangle.cpp
//  Test - 26.01.24_2
//
//  Created by Ralitsa Toneva on 30.01.24.
//

#include "Rectangle.hpp"

Rectangle::Rectangle(int width, int height){
    setWidht(width);
    setHeight(height);
}
void Rectangle::setWidht(int width){
    this -> width = width;
}
int Rectangle::getWidth() const{
    return width;
}
void Rectangle::setHeight(int height){
    this -> height = height;
}
int Rectangle::getHeight() const{
    return height;
}
void Rectangle::draw(){
    std::cout << "Drawing a rectangle" << std::endl;
}
