//
//  Car.hpp
//  04.01.24
//
//  Created by Ralitsa Toneva on 4.01.24.
//

#ifndef Car_hpp
#define Car_hpp

#include <stdio.h>
#include <iostream>
#include <string>

class Car
{
public:
    Car(std::string, int , std::string, std::string, std::string, std::string, std::string);
    void setModel(std::string);
    void setYear(int);
    void setColor(std::string);
    void setFuel(std::string);
    void setVin(std::string);
    void setTransmission(std::string);
    void setPlate(std::string);
    
    void inputDate();
    void displayMessage();
   
    std::string getModel();

private:
    std::string model;
    int year;
    std::string color;
    std::string fuel;
    std::string vin;
    std::string transmission;
    std::string plate;
};

#endif //CPPCLASSES_CAR_H

