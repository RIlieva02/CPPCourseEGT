//
//  Teacher.cpp
//  School
//
//  Created by Ralitsa Toneva on 8.01.24.
//

#include "Teacher.hpp"

Teacher::Teacher(std::string _name, std::string _title, Discipline _discipline): discipline(_discipline){
    this -> name = _name;
    this -> title = _title;
}

void Teacher::print(){
    std::cout << "Teacher name: " << this -> name << std::endl
                << "Title: " << this -> title << std::endl;
    discipline.printDis();
}
