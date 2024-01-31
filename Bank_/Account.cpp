//
//  Account.cpp
//  08.01.24
//
//  Created by Ralitsa Toneva on 8.01.24.
//

#include "Account.hpp"
#include <iostream>

Account::Account(unsigned balance){
    if (balance >= 0){
        this -> balance = balance;
    }
    else {
        this -> balance = 0;
        std::cerr << "Initial balance was invalid" << std::endl;
    }
}

void Account::credit(unsigned amount){
//    if (amount > 0){
        this -> balance += amount;
//    }
//    else {
//        std::cerr << "Credit cannot be egative" << std::endl;
//    }
}
void Account::debit(unsigned amount){
    if (amount <= this -> balance){
        this -> balance -= amount;
    }
    else {
        std::cerr << "Debit amount exceeded account balance" << std::endl;
    }
}
unsigned Account::getBalance(){
    return this -> balance;
}
