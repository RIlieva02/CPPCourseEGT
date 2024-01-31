//
//  Package.hpp
//  17.01.24
//
//  Created by Ralitsa Toneva on 17.01.24.
//

#ifndef Package_hpp
#define Package_hpp

#include <stdio.h>
#include <iostream>
#include "Adsress.hpp"

class Package{
public:
    Package(double, Address, Address, double);
    void setBasePrice(double);
    double getBasePrice() const;
    void setWeight(double);
    double getWeight() const;
    virtual double calculateCost();
    void print();
    
private:
    double basePrice;
    Address sender;
    Address recipient;
    double weight;
};

#endif /* Package_hpp */
