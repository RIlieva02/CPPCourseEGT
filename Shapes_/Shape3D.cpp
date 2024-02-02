//
//  Shape3D.cpp
//  Exercise
//
//  Created by Ralitsa Toneva on 16.01.24.
//

#include "Shape3D.hpp"

Shape3D::Shape3D(int a, int h) : Shape(a){
    setH(h);
}

int Shape3D::getArea(){
    std::cout << "In 3D (area)" << std::endl;
    return 0;
}

void Shape3D::print(){
    std::cout << "In 3D (print)" << std::endl;
}

void Shape3D::setH(int h){
    this -> h = h;
}

int Shape3D::getH() const{
    return h;
}

int Shape3D::getVolume(){
    std::cout << "IN 3D (volume)" << std::endl;
    return 0;
}
