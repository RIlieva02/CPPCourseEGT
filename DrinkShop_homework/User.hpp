//
//  User.hpp
//  22.01.24
//
//  Created by Ralitsa Toneva on 22.01.24.
//

#ifndef User_hpp
#define User_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include "Order.hpp"

class User{
public:
    User(std::string, std::vector<Order *>);
    void setName(std::string);
    std::string getName();
    void addOrder(Order *);
    void print();
private:
    std::string name;
    std::vector<Order *> orders;
    
};
#endif /* User_hpp */
