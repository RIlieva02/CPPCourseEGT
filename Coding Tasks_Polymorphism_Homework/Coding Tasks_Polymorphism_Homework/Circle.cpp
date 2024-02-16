//
//  Circle.cpp
//  Coding Tasks_Polymorphism_Homework
//
//  Created by Ralitsa Toneva on 16.02.24.
//

#include "Circle.hpp"

Circle::Circle(double radius){
    setRadius(radius);
}

void Circle::setRadius(double radius){
    this->radius = radius;
}
double Circle::getRadius() const{
    return this->radius;
}
double Circle::area(){
    return 3.14 * getRadius();
}
