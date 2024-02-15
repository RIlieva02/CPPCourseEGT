//
//  Customer.cpp
//  Task02
//
//  Created by Ralitsa Toneva on 27.04.23.
//

#include "Customer.hpp"
#include <cstring>

void Customer::copy(const Customer& other){
    name = new char[strlen(other.name) + 1];
    phoneNumber = other.phoneNumber;
    adress = new char[strlen(other.adress) + 1];
}
void Customer::destroy(){
    delete[]  name;
    delete[] adress;
}

Customer::Customer(const char *_name, int _phoneNumber, const char *_adress):
    name(new char[strlen(_name) + 1]),
    phoneNumber(_phoneNumber),
    adress(new char[strlen(_adress) + 1]){
    
    strcpy(name, _name);
    strcpy(adress, _adress);
}
Customer::Customer(const Customer& other){
    copy(other);
}
Customer::~Customer(){
    destroy();
}
Customer& Customer::operator=(const Customer& other){
    if (this != &other){
        destroy();
        copy(other);
    }
    return *this;
}

bool Customer::operator==(const Customer& other){
    if (strcasecmp(name, other.name) != 0){
        return false;
    }
    return true;
}
std::ostream& operator<<(std::ostream &os, const Customer& other){
    return os << "Customer: " << other.name << std::endl
                << "Phone number: 08" << other.phoneNumber << std:: endl
                << "Adress: " << other.adress << std::endl;
}

