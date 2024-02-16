//
//  Rectangle.cpp
//  Coding Tasks_Polymorphism_Homework
//
//  Created by Ralitsa Toneva on 16.02.24.
//

#include "Rectangle.hpp"

Rectangle::Rectangle(double height, double wight){
    setHeight(height);
    setWight(wight);
}
void Rectangle::setHeight(double height){
    this->height = height;
}
double Rectangle::getHeight () const{
    return this->height;
}
void Rectangle::setWight(double wight){
    this->wight = wight;
}
double Rectangle::getWight() const{
    return this-> wight;
}
double Rectangle::area(){
    return getHeight() * getWight();
}
