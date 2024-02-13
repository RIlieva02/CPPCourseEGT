//
//  main.cpp
//  XML
//
//  Created by Ralitsa Toneva on 13.02.24.
//

#include <iostream>
#include "EmployeeService.hpp"


int main() {
    
    EmployeeService::parseEmployeesData();
    
    for (auto employee : EmployeeService::getEmployeesList()){
        std::cout << *employee << std::endl;
    }
    
        return 0;
}
