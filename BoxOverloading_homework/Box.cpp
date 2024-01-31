//
//  Box.cpp
//  Box
//
//  Created by Ralitsa Toneva on 29.01.24.
//

#include "Box.hpp"

Box::Box(double _widht, double _lenght, double _height){
    setWidth(_widht);
    setLenght(_lenght);
    setHeight(_height);
}

void Box::copy(const Box &other)
{
    width = other.width;
    length = other.length;
    height = other.height;
}

Box& Box::operator=(const Box &other){
    if (this != &other){
        copy(other);
    }
    return *this;
}

void Box:: setWidth(double _width){
    this -> width = _width;
}
double Box:: getWeight(){
    return this -> width;
}
void Box:: setLenght(double _lenght){
    this -> length = _lenght;
}
double Box::getLenght(){
    return this -> length;
}
void Box::setHeight(double _height){
    this -> height = _height;
}
double Box::getHeight(){
    return this -> height;
}

Box Box::operator+(const Box &other) const
{
    Box result;
    
    result.width = this-> width + other.width;
    result.length = this-> length + other.length;
    result.height = this-> height + other.height;
    
    return result;
}

std::ostream &operator<<( std::ostream &output, const Box &other ){
    output << other.width << ' ' << other.length << ' ' << other.height << std::endl;
    
   return output;
}
