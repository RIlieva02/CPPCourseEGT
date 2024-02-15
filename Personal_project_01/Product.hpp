//
//  Product.hpp
//  Task 01
//
//  Created by Ralitsa Toneva on 11.06.23.
//

#ifndef Product_hpp
#define Product_hpp

#include <stdio.h>
#include "MathExpression.hpp"
#include <vector>
#include <iostream>

class Product : public MathExpression {
private:
    std::vector<MathExpression*> expressions;

public:
    ~Product();

    void addExpression(MathExpression* expression);
    double evaluate() const override ;

    void print() const override ;
};

#endif /* Product_hpp */
