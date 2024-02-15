//
//  Sum.hpp
//  Task 01
//
//  Created by Ralitsa Toneva on 11.06.23.
//

#ifndef Sum_hpp
#define Sum_hpp

#include <stdio.h>
#include "MathExpression.hpp"
#include <vector>

class Sum : public MathExpression {
private:
    std::vector<MathExpression*> expressions;

public:
    ~Sum();
    
    void addExpression(MathExpression* expression);
    double evaluate() const override;

    void print() const override;
};
#endif /* Sum_hpp */
