//
//  Employee.hpp
//  EmployeeManagmentSystem_homework
//
//  Created by Ralitsa Toneva on 31.01.24.
//

#ifndef Employee_hpp
#define Employee_hpp

#include <stdio.h>
#include <string>
#include <iostream>

class Employee{
public:
    Employee(std::string, std::string, std::string);
    void setName(std::string);
    std::string getName() const;
    void setEmployeeID(std::string);
    std::string getEmployeeID() const;
    void setPosition(std::string);
    std::string getPosition() const;
    
    void display();
private:
    std::string name;
    std::string employeeID;
    std::string position;
};
#endif /* Employee_hpp */
