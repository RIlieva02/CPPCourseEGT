//
//  Customer.hpp
//  Task02
//
//  Created by Ralitsa Toneva on 27.04.23.
//

#ifndef Customer_hpp
#define Customer_hpp

#include <stdio.h>
#include <fstream>

class Customer{
private:
    char *name;
    int size = 8;
    int phoneNumber;
    char *adress;
    
    void copy(const Customer& other);
    void destroy();
public:
    Customer(const char*_name, int _phoneNumber, const char *_adress);
    Customer(const Customer& other);
    ~Customer();
    Customer& operator=(const Customer& other);
    
    bool operator==(const Customer& other);
    friend std::ostream& operator<<(std::ostream &os, const Customer& other);
};
#endif /* Customer_hpp */
