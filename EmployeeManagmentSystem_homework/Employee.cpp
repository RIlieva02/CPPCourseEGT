//
//  Employee.cpp
//  EmployeeManagmentSystem_homework
//
//  Created by Ralitsa Toneva on 31.01.24.
//

#include "Employee.hpp"

Employee::Employee(std::string name, std::string ID, std::string position){
    setName(name);
    setEmployeeID(ID);
    setPosition(position);
}
void Employee::setName(std::string name){
    this -> name = name;
}
std::string Employee::getName() const{
    return this -> name;
}
void Employee::setEmployeeID(std::string ID){
    this -> employeeID = ID;
}
std::string Employee::getEmployeeID() const{
    return this -> employeeID;
}
void Employee::setPosition(std::string position){
    this -> position = position;
}
std::string Employee::getPosition() const{
    return this -> position;
}

void Employee::display(){
    std::cout << "Name: " << getName() << std::endl
                << "ID: " << getEmployeeID() << std::endl
                << "Position: " << getPosition() << std::endl;
    std::cout << std:: endl;
}
