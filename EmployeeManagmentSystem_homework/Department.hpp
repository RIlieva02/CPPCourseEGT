//
//  Department.hpp
//  EmployeeManagmentSystem_homework
//
//  Created by Ralitsa Toneva on 31.01.24.
//

#ifndef Department_hpp
#define Department_hpp

#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include "Employee.hpp"

class Department{
public:
    Department(std::string, std::vector<Employee>);
    void setDepartmentName(std::string);
    std::string getDepartmentName() const;
   
    int getNumEmployees() const;
    void addEmployee(Employee*);
    void displayEmployee();
private:
    std::string departmentName;
    std::vector<Employee> employee;
    int numEmployees;
};
#endif /* Department_hpp */
