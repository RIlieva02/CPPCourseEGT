//
//  MathExpression.hpp
//  Task 01
//
//  Created by Ralitsa Toneva on 11.06.23.
//

#ifndef MathExpression_hpp
#define MathExpression_hpp

#include <stdio.h>

class MathExpression {
public:
    virtual double evaluate() const = 0;
    virtual void print() const = 0;
};

#endif /* MathExpression_hpp */
