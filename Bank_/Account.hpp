//
//  Account.hpp
//  08.01.24
//
//  Created by Ralitsa Toneva on 8.01.24.
//

#ifndef Account_hpp
#define Account_hpp

#include <stdio.h>

class Account{
public:
    Account(unsigned);
    
    void credit(unsigned);
    void debit(unsigned);
    unsigned getBalance();
private:
    unsigned balance;

};
#endif /* Account_hpp */
