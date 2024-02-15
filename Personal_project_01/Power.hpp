//
//  Power.hpp
//  Task 01
//
//  Created by Ralitsa Toneva on 11.06.23.
//

#ifndef Power_hpp
#define Power_hpp

#include <stdio.h>
#include "MathExpression.hpp"
#include <vector>
#include <iostream>

class Power : public MathExpression {
private:
    MathExpression* base;
    int exponent;

public:
    Power(MathExpression* b, int exp);
    ~Power();

    double evaluate() const override;
    
    void print() const override;
};
#endif /* Power_hpp */
