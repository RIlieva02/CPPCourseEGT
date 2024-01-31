//
//  Class.hpp
//  School
//
//  Created by Ralitsa Toneva on 8.01.24.
//

#ifndef Class_hpp
#define Class_hpp

#include <stdio.h>
#include <string>
#include <vector>
#include "Teacher.hpp"
#include "Student.hpp"

class Class{
public:
    Class(std::string, std::vector<Student>, Teacher);
    void print();
private:
    std::string className;
    std::vector<Student> students;
    Teacher classTeacher;
};
#endif /* Class_hpp */
