//
//  Adsress.hpp
//  17.01.24
//
//  Created by Ralitsa Toneva on 17.01.24.
//

#ifndef Adsress_hpp
#define Adsress_hpp

#include <stdio.h>
#include <string>
#include <iostream>

class Address{
public:
    Address(std::string, std::string, std::string, std::string);
    void setName(std::string);
    std::string getName() const;
    void setTel(std::string);
    std::string getTel() const;
    void setCity(std::string);
    std::string getCity() const;
    void setStr(std::string);
    std::string getStr() const;
    void print();
private:
    std::string name;
    std::string tel;
    std::string city;
    std::string str;
    
};
#endif /* Adsress_hpp */
