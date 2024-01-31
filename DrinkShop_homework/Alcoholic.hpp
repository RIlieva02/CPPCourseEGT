//
//  Alcoholic.hpp
//  22.01.24
//
//  Created by Ralitsa Toneva on 22.01.24.
//

#ifndef Alcoholic_hpp
#define Alcoholic_hpp

#include <stdio.h>
#include "Drinks.hpp"

class Alcoholic : public Drinks{
public:
    Alcoholic(std::string, double, int, std::string, double, double);
    void setVolume(double);
    double getVolume();
    void setTax(double);
    double getTax();
    virtual double calculatePrice();
    virtual void print();
    
private:
    double volume;
    double tax;
};
#endif /* Alcoholic_hpp */
