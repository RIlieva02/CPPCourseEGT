//
//  main.cpp
//  Operator_Overloading
//
//  Created by Ralitsa Toneva on 29.01.24.
//

#include <iostream>
#include "Date.hpp"

int main() {
    
    Date d1;
    Date d2(06, 22, 1973);
    Date d3(99, 99, 9999);

    std::cout << "d1 is " << d1 << std::endl
                << "d2 is " << d2 << std::endl
                << "d3 is " << d3 << std::endl;
    std::cout << "d2 -= 5 is " << ( d2 -= 5 )
                << std::endl << std::endl;

    d3.setDate(2, 28, 1992);
    std::cout << "  d3 is " << d3 << std::endl;
    std::cout << "--d3 is " << --d3 << std::endl
                <<" (leap year allows 29th)" << std::endl << std::endl;

    Date d4(12, 14, 1975);

    std::cout << "Testing the prefix increment operator: " << std::endl
                << "  d4 is " << d4 << std::endl;
    std::cout << "--d4 is " << --d4 << std::endl;
    std::cout << "  d4 is " << d4 << std::endl;

    std::cout << "Testing the postfix increment operator: " << std::endl
                << "  d4 is " << d4 << std::endl;
    std::cout << "d4-- is " << d4-- << std::endl;
    std::cout << "  d4 is " << d4 << std::endl;
    return 0;
    
    return 0;
}
