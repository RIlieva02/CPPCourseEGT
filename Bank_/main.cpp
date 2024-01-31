//
//  main.cpp
//  08.01.24
//
//  Created by Ralitsa Toneva on 8.01.24.
//

#include <iostream>
#include "Account.hpp"

int main() {
    
    Account account1(500);
    Account account2(600);
    
    std::cout << "First account: " << std::endl;
    account1.debit(300);
    std::cout << account1.getBalance() << std::endl;
    account1.credit(900);
    std::cout << account1.getBalance() << std::endl;
    std::cout << "Secont account: " << std::endl;
    account2.credit(-500);
    std::cout << account2.getBalance() << std::endl;
    return 0;
}
