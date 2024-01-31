//
//  NoAlcoholic.hpp
//  22.01.24
//
//  Created by Ralitsa Toneva on 22.01.24.
//

#ifndef NoAlcoholic_hpp
#define NoAlcoholic_hpp

#include <stdio.h>
#include "Drinks.hpp"

class NoAlcoholic : public Drinks{
public:
    NoAlcoholic(std::string, double, int, std::string, double, double);
    void setLiters(double);
    double getLiters();
    void setCityTax(double);
    double getCityTax();
    virtual double calculatePrice();
    virtual void print();
private:
    double liters;
    double cityTax;
};
#endif /* NoAlcoholic_hpp */
