//
//  Class.cpp
//  School
//
//  Created by Ralitsa Toneva on 8.01.24.
//

#include "Class.hpp"

Class::Class(std::string _className, std::vector<Student> _students, Teacher _classTeacher) : students(_students), classTeacher(_classTeacher){
    this -> className = _className;
    this -> students = _students;
}

void Class::print(){
    std::cout << "Class: " << this -> className << std::endl;
    for (int i = 0; i < students.size(); i++){
        students.at(i).printInfo();
        std::cout << std::endl;
    }
    classTeacher.print();
}
