//
//  User.cpp
//  22.01.24
//
//  Created by Ralitsa Toneva on 22.01.24.
//

#include "User.hpp"

User::User(std::string _name, std::vector<Order *> _orders) : orders(_orders){
    setName(_name);
}

void User::setName(std::string _name){
    this -> name = _name;
}
std::string User::getName(){
    return this -> name;
}

void User::addOrder(Order * order){
    this -> orders.push_back(order);
}
void User::print(){
    std::cout << "Customer: " << getName() << std::endl;
    for (int i = 0; i < orders.size(); i++){
        orders.at(i) -> print();
    }
    std::cout << std::endl;
}
