//
//  EmployeeService.cpp
//  XML
//
//  Created by Ralitsa Toneva on 13.02.24.
//

#include "EmployeeService.hpp"

pugi::xml_document EmployeeService::doc; // инициализация за static полетата
std::vector<Employee*> EmployeeService::employeesList;

std::vector<Employee*> EmployeeService::getEmployeesList(){
    return employeesList;
}

void EmployeeService::parseEmployeesData(){
    // open file
    // go to EmployeesDate.Employees node
    // loop tru all Employees
    // return the Employee node -> parseEmployee; return employee (Employee object)
    // add employee object to vector
    if (doc.load_file("employee.xml")) { return; } // грешка за нас
    pugi::xml_node employees = doc.child("EmployeesData").child("Employees");
    // Обхождаме децата, докато не минем през всички
    for (pugi::xml_node employee = employees.child("Employee");//инициализация
         employee; // условие
         employee = employee.next_sibling("Employee") ) // итерираме
    {
        Employee *ePtr =  Employee::parseEmployee(employee);
        employeesList.push_back(ePtr);

    }
//    for (auto emplоyee : employees){
//        Employee *ePtr =  Employee::parseEmployee(employee);
//        employeesList.push_back(ePtr);
//    }
}
