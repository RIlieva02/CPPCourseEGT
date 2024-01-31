//
//  main.cpp
//  17.01.24
//
//  Created by Ralitsa Toneva on 17.01.24.
//

#include <iostream>
#include <vector>
#include "Adsress.hpp"
#include "Package.hpp"
#include "TwoDayPackage.hpp"
#include "OvernightPackage.hpp"

int main() {
    
    Address s1("Apple", "+359 888 888 888", "Sofia", "<str. address>");
    Address r1("Ralitsa Ilieva", "+359 889 505 709", "Sofiq", "str. <address1>");
    Address r2("Ivan Ivanov", "+359 123 456 789", "Plovdiv", "str. <address2>");
    Address s2("Aleks Petrov", "+359 999 999 999", "Teteven", "<str. address>");
    Address r3("Ema Todorova", "+359 987 654 321", "Varna", "str. <address3>");
    
    Package *ptr1 = new TwoDayPackage(400, s1, r1, 10.0);
    Package *ptr2 = new TwoDayPackage(2.5, s1, r2, 5.0);
    Package *ptr3 = new OvernightPackage(5.0, s2, r3, 2.0);
    
    std::vector<Package *> myPackege;
    myPackege.push_back(ptr1);
    myPackege.push_back(ptr2);
    myPackege.push_back(ptr3);
    
    double turnover = 0;
    
    for (int i = 0; i < myPackege.size(); i++){
        myPackege.at(i) -> print();
        turnover += myPackege.at(i) -> calculateCost();
        std::cout << std::endl;
    }
    
    std::cout << "Turnover: " << turnover << " $" << std::endl;
    
    
    return 0;
}
