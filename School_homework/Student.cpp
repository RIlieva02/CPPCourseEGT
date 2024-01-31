//
//  Student.cpp
//  School
//
//  Created by Ralitsa Toneva on 8.01.24.
//

#include "Student.hpp"

Student::Student(std::string name, int id){
    setName(name);
    setID(id);
}

void Student::setName(std::string name){
    this -> name = name;
}
void Student::setID(int id){
    this -> id = id;
}
void Student::printInfo(){
    std::cout << "Student name: " << this -> name 
    << " and id: " << this -> id << std::endl;
}
