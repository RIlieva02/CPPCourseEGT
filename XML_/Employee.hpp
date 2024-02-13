//
//  Employee.hpp
//  XML
//
//  Created by Ralitsa Toneva on 13.02.24.
//

#ifndef Employee_hpp
#define Employee_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include "Workstation.hpp"

class Employee{
public:
    Employee(std::string, std::string, int, Workstation*);
    
    static Employee* parseEmployee(pugi::xml_node);
    friend std::ostream &operator<<(std::ostream &os, const Employee &employee);
private:
    std::string name;
    std::string type;
    int age;
    
    // Ако не ни е обвързан живота на Workstation с Employee използваме с пойнтер
    Workstation* workstation;
    
    // Той живее толлкова дълго, колкото и Employee
    //Workstation workstation; // Имаме контрол, върху обекта
};
#endif /* Employee_hpp */
