//
//  main.cpp
//  Task 01
//
//  Created by Ralitsa Toneva on 11.06.23.
//

#include <iostream>
#include "MathExpression.hpp"
#include "Constant.hpp"
#include "Sum.hpp"
#include "Product.hpp"
#include "Power.hpp"
#include "Sine.hpp"

int main() {
    Constant* c1 = new Constant(5.0);
    Constant* c2 = new Constant(4.0);
    Constant* c3 = new Constant(2.0);

    Sum* sum = new Sum();
    sum->addExpression(c1);
    sum->addExpression(c2);
    sum->addExpression(c3);

    Product* product = new Product();
    product->addExpression(sum);
    product->addExpression(c1);

    Power* power = new Power(product, 3);

    Sine* sine = new Sine(power, 5);

    std::cout << "Expression: ";
    sine->print();
    std::cout << std::endl;

    std::cout << "Evaluation: " << sine->evaluate() << std::endl;

    delete sine;

    return 0;
}
