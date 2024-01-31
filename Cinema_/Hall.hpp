//
//  Hall.hpp
//  10.01.24
//
//  Created by Ralitsa Toneva on 10.01.24.
//

#ifndef Hall_hpp
#define Hall_hpp

#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include "Screening.hpp"

class Hall{
public:
    Hall(std::string, int);
    Hall(std::string, int, std::vector<Screening>);
    void setScreeningList(std::vector<Screening>);
    std::vector<Screening> getScreeningList();
    void addScreening(Screening);
    void setName(std::string);
    void setSeats(int);
    std::string getName();
    int getSeats();
    void print();
private:
    std::string name;
    int seats;
    std::vector<Screening> screeningList;
};
#endif /* Hall_hpp */
