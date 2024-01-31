//
//  Package.cpp
//  17.01.24
//
//  Created by Ralitsa Toneva on 17.01.24.
//

#include "Package.hpp"

Package::Package(double _basePrice, Address _sender, Address _recipient, double _weight)
    : sender(_sender), recipient(_recipient){
    setBasePrice(_basePrice);
    setWeight(_weight);
}

void Package::setBasePrice(double _basePrice){
    this -> basePrice = _basePrice;
}
double Package::getBasePrice() const{
    return this -> basePrice;
}
void Package::setWeight(double _weight){
    this -> weight = _weight;
}
double Package::getWeight() const{
    return this -> weight;
}

void Package::print(){
    this -> sender.print();
    this -> recipient.print();
    std::cout << "Price: " << getBasePrice() << " $" << std::endl
                << "Weight: " << getWeight() << " kg" << std::endl
                << "Final price: " << calculateCost() << " $" << std::endl;
    
}

double Package::calculateCost(){
    return getBasePrice() * getWeight();
}
