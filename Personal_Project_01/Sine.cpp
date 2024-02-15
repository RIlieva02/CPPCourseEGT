//
//  Sine.cpp
//  Task 01
//
//  Created by Ralitsa Toneva on 11.06.23.
//

#include "Sine.hpp"

Sine::Sine(MathExpression* expr, int approx) : expression(expr), approximation(approx) {}

Sine::~Sine() {
    delete expression;
}

double Sine::evaluate() const  {
    double value = expression->evaluate();
    double radians = value * 3.141592653589793 / 180.0;
    double result = 0.0;
    
    for (int i = 0; i < approximation; ++i) {
        int sign = (i % 2 == 0) ? 1 : -1;
        int fact = 1;
        for (int j = 1; j <= (2 * i + 1); ++j) {
            fact *= j;
        }
        result += (sign * std::pow(radians, 2 * i + 1)) / fact;
    }
    
    return result;
}

void Sine::print() const {
    std::cout << "sin(";
    expression->print();
    std::cout << ")";
}
