//
//  Member.cpp
//  LibraryManagementSystem_homework
//
//  Created by Ralitsa Toneva on 31.01.24.
//

#include "Member.hpp"

Member::Member(std::string name, int age, std::string ID){
    setName(name);
    setAge(age);
    setID(ID);
}
void Member::setName(std::string name){
    this -> name = name;
}
std::string Member::getName() const{
    return this ->name;
}
void Member::setAge(int age){
    this -> age = age;
}
int Member::getAge() const{
    return this -> age;
}
void Member::setID(std::string ID){
    this -> ID = ID;
}
std::string Member::getID() const{
    return this -> ID;
}

void Member::display(){
    std::cout << "Name: " << getName() << std::endl
                << "Age: " << getAge() << std::endl
                << "ID: " << getID() << std::endl;
    std::cout << std::endl;
}
void Member::borrowBook(Book *book){
    std::cout << getName() << " is borrowing " << book -> getTitle() << std::endl;
    std::cout << std::endl;
}
