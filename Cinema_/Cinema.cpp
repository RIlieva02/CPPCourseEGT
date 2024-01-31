//
//  Cinema.cpp
//  10.01.24
//
//  Created by Ralitsa Toneva on 10.01.24.
//

#include "Cinema.hpp"

Cinema::Cinema(std::string name, std::string address, std::vector<Hall> halls){
    setName(name);
    setAddress(address);
    setHallList(halls);
}

void Cinema::setName(std::string name){
    this -> name = name;
}
void Cinema::setAddress(std::string address){
    this -> address = address;
}
void Cinema::setHallList(std::vector<Hall> halls){
    this -> hallsList = halls;
}

std::string Cinema::getName(){
    return this -> name;
}
std::string Cinema::getAddress(){
    return this -> address;
}
std::vector<Hall> Cinema::getHallList(){
    return this -> hallsList;
}

void Cinema::addHall(Hall hall){
    this -> hallsList.push_back(hall);
}
void Cinema::print(){
    std::cout << "Cinema name is: " << getName() << std::endl
                << "Address: " << getAddress() << std::endl;
    for (int i = 0; i < hallsList.size(); i++){
        hallsList.at(i).print();
        std::cout << std::endl;
    }
}
