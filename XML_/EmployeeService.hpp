//
//  EmployeeService.hpp
//  XML
//
//  Created by Ralitsa Toneva on 13.02.24.
//

#ifndef EmployeeService_hpp
#define EmployeeService_hpp

#include <stdio.h>
#include <vector>
#include "Employee.hpp"

class EmployeeService{
public:
    static void parseEmployeesData();
    static std::vector<Employee*> getEmployeesList();
private:
    // правим employeesList static, защото не може да използваме нещо, което не е static в static функция (parseEmployeesData())
    static std::vector<Employee*> employeesList;
    // doc има достъп до load файла, той съдържа абсолютно всичко
    static pugi::xml_document doc;
    // правим doc static, защото не може да използваме нещо, което не е static в static функция (parseEmployeesData())
    
};
#endif /* EmployeeService_hpp */
