//
//  Product.cpp
//  Task 01
//
//  Created by Ralitsa Toneva on 11.06.23.
//

#include "Product.hpp"

Product::~Product() {
    for (auto expression : expressions) {
        delete expression;
    }
}

void Product::addExpression(MathExpression* expression) {
    expressions.push_back(expression);
}

double Product::evaluate() const {
    double product = 1.0;
    for (auto expression : expressions) {
        product *= expression->evaluate();
    }
    return product;
}

void Product::print() const {
    std::cout << "(";
    for (size_t i = 0; i < expressions.size(); i++) {
        if (expressions[i]->evaluate() < 0) {
            std::cout << "(";
            expressions[i]->print();
            std::cout << ")";
        } else {
            expressions[i]->print();
        }

        if (i != expressions.size() - 1) {
            std::cout << " * ";
        }
    }
    std::cout << ")";
}
