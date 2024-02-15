//
//  Sum.cpp
//  Task 01
//
//  Created by Ralitsa Toneva on 11.06.23.
//

#include "Sum.hpp"
#include <iostream>

Sum::~Sum() {
    for (auto expression : expressions) {
        delete expression;
    }
}

void Sum::addExpression(MathExpression* expression) {        expressions.push_back(expression);
}

double Sum::evaluate() const {
    double sum = 0.0;
    for (auto expression : expressions) {
        sum += expression->evaluate();
    }
    return sum;
}

void Sum::print() const {
    std::cout << "(";
    for (size_t i = 0; i < expressions.size(); i++) {
        if (expressions[i]->evaluate() < 0) {
            std::cout << "- ";
            expressions[i]->print();
        }
        else {
            expressions[i]->print();
        }
        if (i != expressions.size() - 1) {
            std::cout << " + ";
        }
    }
    std::cout << ")";
}

