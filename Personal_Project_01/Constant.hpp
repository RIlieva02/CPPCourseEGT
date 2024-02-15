//
//  Constant.hpp
//  Task 01
//
//  Created by Ralitsa Toneva on 11.06.23.
//

#ifndef Constant_hpp
#define Constant_hpp

#include <stdio.h>
#include "MathExpression.hpp"

class Constant : public MathExpression {
private:
    double value;

public:
    Constant(double val);

    double evaluate() const override;

    void print() const override;
};
#endif /* Constant_hpp */
