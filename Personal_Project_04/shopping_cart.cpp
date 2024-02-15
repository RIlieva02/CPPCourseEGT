//
//  shopping_cart.cpp
//  Shopping_cart
//
//  Created by Ralitsa Toneva on 28.03.23.
//

#include <iostream>
#include <cstring>
#include "shopping_cart.hpp"

ShoppingCart::ShoppingCart(const char* _name, double _price, unsigned _quantity, double finalPrice):
                    name(new char[std::strlen(_name) + 1]),
                    price(_price),
                    quantity(_quantity),
                    finalPrice(0.00){
}
ShoppingCart::ShoppingCart(const ShoppingCart& other):
                    name(new char[std::strlen(other.name) + 1]),
                    price(other.price),
                    quantity(other.quantity),
                    finalPrice(0.00){
    
                name = other.name;
                price = other.price;
                quantity = other.quantity;
}
ShoppingCart ShoppingCart::operator=(const ShoppingCart& other){
    copy(other);
    return *this;
}
ShoppingCart ShoppingCart::operator+(const ShoppingCart& other){
    return *this;
}
ShoppingCart ShoppingCart::operator*(const ShoppingCart& other){
    return *this;
}
ShoppingCart::~ShoppingCart(){
    delete[] name;
}

void ShoppingCart::copy(const ShoppingCart& other) {
    name = new char[strlen(other.name) + 1];
    strcpy(name, other.name);
    price = other.price;
    quantity = other.quantity;
}
void ShoppingCart::swap(ShoppingCart& other) {
    using std::swap;
    swap(name, other.name);
    swap(price, other.price);
    swap(quantity, other.quantity);
}

const char *ShoppingCart::getName()const{
    return name;
}
double ShoppingCart::getPrice()const{
    return price;
}
unsigned ShoppingCart::getQuantity()const{
    return quantity;
}
double ShoppingCart::getFinalPrice()const{
    return finalPrice;
}
bool ShoppingCart::getYes_No()const{
    return yes_no;
}

void ShoppingCart::setName(const char *_name){
    strcpy(name, _name);
}
void ShoppingCart::setPrice(double _price){
    price = _price;
}
void ShoppingCart::setQuantity(unsigned int _quantity){
    quantity = _quantity;
}
void ShoppingCart::setFinalPrice(double _price, unsigned _quantity, double _finalPrice){
    price = _price;
    quantity = _quantity;
    _finalPrice = price * quantity;
    finalPrice = _finalPrice;
}
void ShoppingCart::setYes_No(bool _yes_no){
    yes_no = _yes_no;
}

void ShoppingCart::print()const{
    std::cout << "Product: " << name << std::endl
                << "Price: " << price << std::endl
                << "Quantity: " << quantity << std::endl
                << "Final price: " << price * quantity << std::endl;
    std::cout << std::endl;
}


