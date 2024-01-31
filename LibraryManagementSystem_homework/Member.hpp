//
//  Member.hpp
//  LibraryManagementSystem_homework
//
//  Created by Ralitsa Toneva on 31.01.24.
//

#ifndef Member_hpp
#define Member_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include "Book.hpp"

class Member{
public:
    Member(std::string, int, std::string);
    void setName(std::string);
    std::string getName() const;
    void setAge(int);
    int getAge() const;
    void setID(std::string);
    std::string getID() const;
    
    void display();
    void borrowBook(Book *);
private:
    std::string name;
    int age;
    std::string ID;
};
#endif /* Member_hpp */
