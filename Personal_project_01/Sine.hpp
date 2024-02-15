//
//  Sine.hpp
//  Task 01
//
//  Created by Ralitsa Toneva on 11.06.23.
//

#ifndef Sine_hpp
#define Sine_hpp

#include <stdio.h>
#include "MathExpression.hpp"
#include <vector>
#include <iostream>

class Sine : public MathExpression {
private:
    MathExpression* expression;
    int approximation;
    
public:
    Sine(MathExpression* expr, int approx);
    ~Sine();
    
    double evaluate() const override;
    
    void print() const override;
};
#endif /* Sine_hpp */
