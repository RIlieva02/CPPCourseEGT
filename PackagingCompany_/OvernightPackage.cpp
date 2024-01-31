//
//  OvernightPackage.cpp
//  17.01.24
//
//  Created by Ralitsa Toneva on 17.01.24.
//

#include "OvernightPackage.hpp"

OvernightPackage::OvernightPackage(double _expressPrice, Address _sender, Address _recipient, double _weight)
    : Package(_expressPrice, _sender, _recipient, _weight){
        setExpressPrice(_expressPrice);
}

void OvernightPackage::setExpressPrice(double _expressPrice){
    this -> expressPrice = _expressPrice;
}
double OvernightPackage::getExpressPrice() const{
    return this -> expressPrice;
}

double OvernightPackage::calculateCost(){
    return getExpressPrice() * getWeight();
}
