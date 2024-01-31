//
//  CarService.cpp
//  04.01.24
//
//  Created by Ralitsa Toneva on 4.01.24.
//

#include "CarService.hpp"

Car CarService::inputDate(){
    std::string model;
    int year;
    std::string color;
    std::string fuel;
    std::string vin;
    std::string transmission;
    std::string plate;
    
    std::cout << "Enter model: ";
    std::cin >> model;
    std::cout << "Enter year: ";
    std::cin >> year;
    std::cout << "Enter color: ";
    std::cin >> color;
    std::cout << "Enter fuel: ";
    std::cin >> fuel;
    std::cout << "Enter vin: ";
    std::cin >> vin;
    std::cout << "Enter transmission: ";
    std::cin >> transmission;
    std::cout << "Enter plate: ";
    std::cin >> plate;
    
    Car myCar(model, year, color, fuel, vin, transmission, plate);
    return myCar;
}


