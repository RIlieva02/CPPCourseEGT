//
//  Drinks.hpp
//  22.01.24
//
//  Created by Ralitsa Toneva on 22.01.24.
//

#ifndef Drinks_hpp
#define Drinks_hpp

#include <stdio.h>
#include <string>
#include <iostream>

class Drinks{
public:
    Drinks(std::string, double, int, std::string);
    void setName(std::string);
    std::string getName();
    void setPrice(double);
    double getPrice();
    void setQuantity(int);
    int getQuantity();
    void setType(std::string);
    std::string getType();
    virtual double calculatePrice();
    virtual void print();
    
private:
    std::string name;
    double price;
    int quantity;
    std::string type;
    
};
#endif /* Drinks_hpp */
