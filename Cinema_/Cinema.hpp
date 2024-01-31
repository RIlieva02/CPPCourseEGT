//
//  Cinema.hpp
//  10.01.24
//
//  Created by Ralitsa Toneva on 10.01.24.
//

#ifndef Cinema_hpp
#define Cinema_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include "Hall.hpp"

class Cinema{
public:
    Cinema(std::string, std::string, std::vector<Hall>);
    void setName(std::string);
    void setAddress(std::string);
    void setHallList(std::vector<Hall>);
    std::string getName();
    std::string getAddress();
    std::vector<Hall> getHallList();
    void addHall(Hall);
    void print();
private:
    std::string name;
    std::string address;
    std::vector<Hall> hallsList;
};
#endif /* Cinema_hpp */
