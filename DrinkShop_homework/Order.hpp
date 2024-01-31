//
//  Order.hpp
//  22.01.24
//
//  Created by Ralitsa Toneva on 22.01.24.
//

#ifndef Order_hpp
#define Order_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include "Alcoholic.hpp"
#include "NoAlcoholic.hpp"

class Order{
public:
    Order(std::vector<Drinks *>, std::string);
    void setDate(std::string);
    std::string getDate();
    void setFinalPrice(double);
    double getFinalPrice();
    void addDrink(Drinks *);
    void print();
private:
    std::vector<Drinks *> drinks;
    std::string date;
    double finalPrice;
};

#endif /* Order_hpp */
