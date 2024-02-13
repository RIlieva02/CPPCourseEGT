//
//  Employee.cpp
//  XML
//
//  Created by Ralitsa Toneva on 13.02.24.
//

#include "Employee.hpp"

Employee::Employee(std::string name, std::string type, int age, Workstation* workStation) : name(name), type(type), age(age), workstation(workStation){ }

Employee* Employee::parseEmployee(pugi::xml_node employeeNode){
    std::string name = employeeNode.attribute("Name").value();
    std::string type = employeeNode.attribute("Type").value();
    int age = employeeNode.attribute("Age").as_int();
    
    Workstation* wPtr = Workstation::parseWorkstation(employeeNode.child("Workstation"));
    
    return new Employee(name, type, age, wPtr);
}

std::ostream &operator<<(std::ostream &os, const Employee &employee) {
    os << "Name: " << employee.name << " Type: " << employee.type << " Age: " << employee.age << " Workstation: "
       << *employee.workstation;
    return os;
}
