//
//  2DShape.cpp
//  Exercise
//
//  Created by Ralitsa Toneva on 16.01.24.
//

#include "Shape2D.hpp"

Shape2D::Shape2D(int side) : Shape(side){}

int Shape2D::getArea(){
    std::cout << "In 2D (area)" << std::endl;
    return 0;
}

void Shape2D::print(){
    std::cout << "In 2D (print)" << std::endl;
}
