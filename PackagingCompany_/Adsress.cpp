//
//  Adsress.cpp
//  17.01.24
//
//  Created by Ralitsa Toneva on 17.01.24.
//

#include "Adsress.hpp"

Address:: Address(std::string _name, std::string _tel, std::string _city, std::string _str){
    setName(_name);
    setTel(_tel);
    setCity(_city);
    setStr(_str);
}

void Address::setName(std::string _name){
    this -> name = _name;
}
std::string Address::getName() const{
    return this -> name;
}
void Address::setTel(std::string _tel){
    this -> tel = _tel;
}
std::string Address::getTel() const{
    return this -> tel;
}
void Address::setCity(std::string _city){
    this -> city = _city;
}
std::string Address::getCity() const{
    return this -> city;
}
void Address::setStr(std::string _str){
    this -> str = _str;
}
std::string Address::getStr() const{
    return this -> str;
}

void Address::print(){
    std::cout << "Name: " << getName() << std::endl
                << "Phone: " << getTel() << std::endl
                << "City: " << getCity() << std::endl
                << "Str: " << getStr() << std::endl;
    
}
