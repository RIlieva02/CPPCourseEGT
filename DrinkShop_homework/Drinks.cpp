//
//  Drinks.cpp
//  22.01.24
//
//  Created by Ralitsa Toneva on 22.01.24.
//

#include "Drinks.hpp"

Drinks:: Drinks(std::string _name, double _price, int _quantity, std::string _type){
    setName(_name);
    setPrice(_price);
    setQuantity(_quantity);
    setType(_type);
}

void Drinks::setName(std::string _name){
    this -> name  = _name;
}
std::string Drinks::getName(){
    return this -> name;
}
void Drinks::setPrice(double _price){
    this -> price = _price;
}
double Drinks::getPrice(){
    return this -> price;
}
void Drinks::setQuantity(int _quantity){
    this -> quantity = _quantity;
}
int Drinks::getQuantity(){
    return this -> quantity;
}
void Drinks::setType(std::string _type){
    this -> type = _type;
}
std::string Drinks::getType(){
    return this -> type;
}

double Drinks::calculatePrice(){
    return this -> getPrice() * getQuantity();
}

void Drinks::print(){
    std::cout << "Name: " << getName() << std::endl
                << "Price: " << getPrice() << std::endl
                << "Quantity: " << getQuantity() << std::endl
                << "Type: " << getType() << std::endl;
}
