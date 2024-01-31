//
//  Teacher.hpp
//  School
//
//  Created by Ralitsa Toneva on 8.01.24.
//

#ifndef Teacher_hpp
#define Teacher_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include "Discipline.hpp"

class Teacher{
public:
    Teacher(std::string, std::string, Discipline);
    void print();
    
private:
    std::string name;
    std::string title;
    Discipline discipline;
};
#endif /* Teacher_hpp */
