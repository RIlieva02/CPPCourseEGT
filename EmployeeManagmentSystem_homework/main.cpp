//
//  main.cpp
//  EmployeeManagmentSystem_homework
//
//  Created by Ralitsa Toneva on 31.01.24.
//

#include <iostream>
#include "Employee.hpp"
#include "Department.hpp"

int main() {
    
    Employee e1("Ralitsa Ilieva", "ID9999", "Software Engineer");
    Employee e2("Ivan Ivanov", "ID7777", "Marketing Manager");
    Employee e3("Ina Atanasova", "ID8888", "HR");
    Employee e4("Toni Todorov", "ID5555", "QA");
    
    std::vector<Employee> employees;
    employees.push_back(e1);
    employees.push_back(e2);
    employees.push_back(e3);
    
    Department d1("IT", employees);
    d1.addEmployee(&e4);
    d1.displayEmployee();
    
    return 0;
}
