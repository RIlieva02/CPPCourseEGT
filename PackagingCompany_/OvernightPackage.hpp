//
//  OvernightPackage.hpp
//  17.01.24
//
//  Created by Ralitsa Toneva on 17.01.24.
//

#ifndef OvernightPackage_hpp
#define OvernightPackage_hpp

#include <stdio.h>
#include "Package.hpp"

class OvernightPackage : public Package{
public:
    OvernightPackage(double, Address, Address, double);
    void setExpressPrice(double);
    double getExpressPrice() const;
    virtual double calculateCost();
private:
    double expressPrice;
    
};

#endif /* OvernightPackage_hpp */
