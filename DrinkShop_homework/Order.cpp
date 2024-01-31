//
//  Order.cpp
//  22.01.24
//
//  Created by Ralitsa Toneva on 22.01.24.
//

#include "Order.hpp"

Order::Order(std::vector<Drinks *> _drinks, std::string _date) : drinks(_drinks){
    setDate(_date);
}

void Order::setDate(std::string _date){
    this -> date = _date;
}
std::string Order::getDate(){
    return this -> date;
}
void Order::setFinalPrice(double _finalPrice){
    this -> finalPrice = _finalPrice;
}
double Order::getFinalPrice(){
    for (int i = 0; i < drinks.size(); i++){
        this -> finalPrice += drinks.at(i) -> calculatePrice();
    }
    return this -> finalPrice;
}

void Order::addDrink(Drinks * drink){
    this -> drinks.push_back(drink);
}
void Order::print(){
    std::cout << "Order: " << std::endl;
    for (int i = 0; i < drinks.size(); i++){
        drinks.at(i) -> print();
    }
    std::cout << "Date: " << getDate() << std::endl
                << "Final price: " << getFinalPrice() << " $" << std::endl;
    std::cout << std::endl;
}
