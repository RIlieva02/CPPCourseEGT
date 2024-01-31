//
//  Car.cpp
//  04.01.24
//
//  Created by Ralitsa Toneva on 4.01.24.

#include "Car.hpp"
#include <string>

Car::Car(std::string model, int year, std::string color, std::string fuel, std::string vin, std::string transmission, std::string plate) {
    setModel(model);
    setYear(year);
    this->color = color;
    this->fuel = fuel;
    this->vin = vin;
    this->transmission = transmission;
    this->plate = plate;
}

void Car::setModel(std::string model)
{
    this -> model = model;
}
void Car::setYear(int year)
{
    if (year > 1970 && year < 2024) {
        this->year = year;
    } else {
        this->year = 0;
        std::cout << "Invalid year. Year must be between 1970 and 2024 " << std::endl;
    }
}
void Car::setColor(std::string color){
    this -> color = color;
}
void Car::setFuel(std::string fuel){
    this -> fuel = fuel;
}
void Car::setVin(std::string vin){
    this -> vin = vin;
}
void Car::setTransmission(std::string transmission){
    this -> transmission = transmission;
}
void Car::setPlate(std::string plate){
    this -> plate = plate;
}

void Car::displayMessage()
{
    std::cout << "model: " << this->model
         << " year: " << this->year
         << " color: " << this->color
         << " fuel: " << this->fuel
         << " vin: " << this->vin
         << " transmission: " << this->transmission
         << " plate: " << this->plate
         << std::endl;
}

