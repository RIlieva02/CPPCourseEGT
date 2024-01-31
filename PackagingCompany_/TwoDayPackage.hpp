//
//  TwoDayPackage.hpp
//  17.01.24
//
//  Created by Ralitsa Toneva on 17.01.24.
//

#ifndef TwoDayPackage_hpp
#define TwoDayPackage_hpp

#include <stdio.h>
#include "Package.hpp"

class TwoDayPackage : public Package{
public:
    TwoDayPackage(double, Address, Address, double);
    
};
#endif /* TwoDayPackage_hpp */
