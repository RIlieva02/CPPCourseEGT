//
//  Circle.cpp
//  Test - 26.01.24_2
//
//  Created by Ralitsa Toneva on 30.01.24.
//

#include "Circle.hpp"

Circle::Circle(int radius) { setRadius(radius); }

void Circle::setRadius(int radius){
    this -> radius = radius;
}
int Circle::getradius() const{
    return radius;
}
void Circle::draw(){
    std::cout << "Drawing a circle" << std::endl;
}
