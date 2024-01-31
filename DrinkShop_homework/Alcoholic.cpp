//
//  Alcoholic.cpp
//  22.01.24
//
//  Created by Ralitsa Toneva on 22.01.24.
//

#include "Alcoholic.hpp"

Alcoholic::Alcoholic(std::string _name, double _price, int _quantity,
                     std::string _type, double _volume, double _tax)
                        : Drinks(_name, _price, _quantity, _type){
                            setVolume(_volume);
                            setTax(_tax);
    
}

void Alcoholic::setVolume(double _volume){
    this -> volume = _volume;
}
double Alcoholic::getVolume(){
    return this -> volume;
}
void Alcoholic::setTax(double _tax){
    this -> tax = _tax;
}
double Alcoholic::getTax(){
    return this -> tax;
}

double Alcoholic::calculatePrice(){
    return getQuantity() * (getPrice() + getTax());
}

void Alcoholic::print(){
    Drinks:: print();
    std::cout << "Volume: " << getVolume() << " %" << std::endl
                << "Tax: " << getTax()  << " $" << std::endl
                << "Final price: " << calculatePrice() << " $" << std::endl;
    std::cout << std::endl;
}

