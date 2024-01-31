//
//  NoAlcoholic.cpp
//  22.01.24
//
//  Created by Ralitsa Toneva on 22.01.24.
//

#include "NoAlcoholic.hpp"

NoAlcoholic::NoAlcoholic(std::string _name, double _price, int _quantity,
                         std::string _type, double _liters, double _cityTax)
                            : Drinks(_name, _price, _quantity, _type){
                                setLiters(_liters);
                                setCityTax(_cityTax);
}

void NoAlcoholic::setLiters(double _liters){
    this -> liters = _liters;
    
}

double NoAlcoholic::getLiters(){
    return this -> liters;
}

void NoAlcoholic::setCityTax(double _cityTax){
    this -> cityTax = _cityTax;
}
double NoAlcoholic::getCityTax(){
    return this -> cityTax;
}

double NoAlcoholic::calculatePrice(){
    return getQuantity() * (getPrice() + getCityTax());
}

void NoAlcoholic::print(){
    Drinks::print();
    std::cout << "Liters: " << getLiters() << " l" << std::endl
                << "CityTax: " << getCityTax() << std::endl
                << "Final price: " << calculatePrice() << " $" << std::endl;
    std::cout << std::endl;
}
