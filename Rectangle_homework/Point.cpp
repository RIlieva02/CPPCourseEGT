//
//  Point.cpp
//  16.01.24
//
//  Created by Ralitsa Toneva on 16.01.24.
//

#include "Point.hpp"

Point::Point(int x, int y){
    setX(x);
    setY(y);
}

void Point::setX(int x){
    if ( x >= 0 && x <= 20){
        Point:: x = x;
    }
    else {
        this -> x = 0;
        std::cout << "Invalid coordinate!" << std::endl;
    }
}
int Point::getX() const{
    return x;
}
void Point::setY(int y){
    if (y >= 0 && y <= 20){
        Point:: y = y;
    }
    else {
        this -> y = 0;
        std::cout << "Invalid coordinate!" << std::endl;
    }
}
int Point::getY() const{
    return y;
}

void Point::print(){
    std::cout << getX() << " " << getY() << std::endl;
}
