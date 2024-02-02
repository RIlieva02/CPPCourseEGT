//
//  Shape.cpp
//  Exercise
//
//  Created by Ralitsa Toneva on 16.01.24.
//

#include "Shape.hpp"

Shape::Shape(int side){
    setA(side);
}

void Shape::setA(int side){
    Shape:: a = side;
}
int Shape::getA() const{
    return a;
}
int Shape::getArea(){
    std::cout << "In shape the area is (area)" << std::endl;
    return 0;
}

void Shape::print(){
    std::cout << "In shape the area is (print)" << getA() << std::endl;
}

