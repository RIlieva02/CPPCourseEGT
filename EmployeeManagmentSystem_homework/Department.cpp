//
//  Department.cpp
//  EmployeeManagmentSystem_homework
//
//  Created by Ralitsa Toneva on 31.01.24.
//

#include "Department.hpp"

Department::Department(std::string name, std::vector<Employee> employees) : employee(employees){
    setDepartmentName(name);
}
void Department::setDepartmentName(std::string name){
    this -> departmentName = name;
}
std::string Department::getDepartmentName() const{
    return this -> departmentName;
}

int Department::getNumEmployees() const{
    return employee.size();
}
void Department::addEmployee(Employee *employees){
    employee.push_back(*employees);
}
void Department::displayEmployee(){
    std::cout << "Department: " << getDepartmentName() << std::endl
                << "Employees: " << getNumEmployees() << std::endl;
    std::cout << std::endl;
    for (int i = 0; i < employee.size(); i++){
        employee.at(i).display();
    }
}


