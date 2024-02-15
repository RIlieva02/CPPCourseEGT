//
//  Constant.cpp
//  Task 01
//
//  Created by Ralitsa Toneva on 11.06.23.
//

#include "Constant.hpp"
#include <iostream>

Constant::Constant(double val) : value(val) {}

double Constant::evaluate() const {
    return value;
}

void Constant::print() const {
    std::cout << value;
}

