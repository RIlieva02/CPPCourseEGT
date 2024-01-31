//
//  main.cpp
//  Box
//
//  Created by Ralitsa Toneva on 29.01.24.
//

#include <iostream>
#include "Box.hpp"

int main() {
    
    Box b1;
    b1.setWidth(3.5);
    b1.setLenght(2);
    b1.setHeight(4);
    
    Box b2;
    b2.setWidth(2.5);
    b2.setLenght(1);
    b2.setHeight(4.5);
    
    Box b3 = b1 + b2;
    
    std::cout << b3;
    
    return 0;
}
