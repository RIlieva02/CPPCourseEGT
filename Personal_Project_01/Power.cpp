//
//  Power.cpp
//  Task 01
//
//  Created by Ralitsa Toneva on 11.06.23.
//

#include "Power.hpp"

Power::Power(MathExpression* b, int exp) : base(b), exponent(exp) {
    
}

Power::~Power() {
    delete base;
}

double Power::evaluate() const {
    return std::pow(base->evaluate(), exponent);
}

void Power::print() const {
    base->print();
    std::cout << "^" << exponent;
}
