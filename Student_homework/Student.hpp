//
//  Student.hpp
//  Student_homework
//
//  Created by Ralitsa Toneva on 14.12.23.
//

#ifndef Student_hpp
#define Student_hpp

#include <stdio.h>
#include <iostream>
#include <string>

class Student{
public:
    Student(std::string, int, std::string, std::string);
    
    void setName(std::string);
    std::string getName() const;
    void setPersonID(int);
    int getPersonID() const;
    void setCity(std::string);
    std::string getCity() const;
    void setBirthday(std::string);
    std::string getBirthday() const;
    
    void print();
private:
    std::string name;
    int personID;
    std::string city;
    std::string birthday;
};
#endif /* Student_hpp */
