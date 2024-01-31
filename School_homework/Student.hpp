//
//  Student.hpp
//  School
//
//  Created by Ralitsa Toneva on 8.01.24.
//

#ifndef Student_hpp
#define Student_hpp

#include <stdio.h>
#include <string>
#include <iostream>

class Student{
public:
    Student(std::string, int);
    void setName(std::string);
    void setID(int);
    std::string getName();
    int getID();
    void printInfo();
private:
    std::string name;
    int id;
};
#endif /* Student_hpp */
