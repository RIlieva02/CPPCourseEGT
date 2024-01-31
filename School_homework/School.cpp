//
//  School.cpp
//  School
//
//  Created by Ralitsa Toneva on 8.01.24.
//

#include "School.hpp"
#include <string>

School::School(std::string _schoolName, std::vector<Class> _classes) : classes(_classes){ this -> schoolName = _schoolName;}

void School::print(){
    for (int i = 0; i < classes.size(); i++){
        classes.at(i).print();
        std::cout << std::endl;
    }
}
