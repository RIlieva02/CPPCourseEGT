//
//  School.hpp
//  School
//
//  Created by Ralitsa Toneva on 8.01.24.
//

#ifndef School_hpp
#define School_hpp

#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include "Class.hpp"

class School{
public:
    School(std::string, std::vector<Class>);
    void print();
private:
    std::string schoolName;
    std::vector<Class> classes;
};

#endif /* School_hpp */
