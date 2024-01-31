//
//  main.cpp
//  14.12.23
//
//  Created by Ralitsa Toneva on 14.12.23.
//

#include <iostream>
#include <string>

    // Класове

class Car{
public:
    Car(std::string _model, int _year, std::string _color, std::string _fuel,
        std::string _vin, std::string _transmission, std::string _plate){
        
        setModel(_model);
        setYear(_year);
        setColor(_color);
        setFuel(_fuel);
        setVin(_vin);
        setTransmission(_transmission);
        setPlate(_plate);
    }

    void setModel(std::string _model){
        this->model = _model;
    }
    void setYear(int _year){
        if (_year > 1970 && _year < 2023){
            this->year = _year;
        }
        else {
            this->year = 0;
        std::cout << "Invalid year. Year must be between 1970 and 2023"
                    << std::endl;
        }
    }
    void setColor(std::string _color){
        this->color = _color;
    }
    void setFuel(std::string _fuel){
        this->fuel = _fuel;
    }
    void setVin(std::string _vin){
        this->vin = _vin;
    }
    void setTransmission(std::string _transmission){
        this->transmission = _transmission;
    }
    void setPlate(std::string _plate){
        this->plate = _plate;
    }
    
    std::string getModel(){
        return this->model;
    }
    int getYear(){
        return year;
    }
    std::string getColor(){
        return color;
    }
    std::string getFluel(){
        return fuel;
    }
    std::string getVin(){
        return vin;
    }
    std::string getTransmission(){
        return transmission;
    }
    std::string getPlate(){
        return plate;
    }
    
    void displayMessage(){
        std::cout << "Model: " << model << std::endl
                    << "Year is: " << year << std::endl
        << "Color: " << color << std::endl;
    }
private:
    std::string model;
    int year;
    std::string color;
    std::string fuel;
    std::string vin;
    std::string transmission;
    std::string plate;
};

int main() {
    
    Car firstCar("audi", 2020, "green", "disel", "d532dt7362", "auto", "OB4545BG");
    Car secondCar("honda", 2002, "grey", "gas", "ju23r42334", "auto", "H0000BG");
    
    std::string model;
    int year;

    std::cout << "Enter car model: ";
    std::cin >> model;

    firstCar.setModel(model);

    std::cout << "Enter car year: ";
    std::cin >> year;

    firstCar.setYear(year);
    firstCar.displayMessage();
    
    std::string carModel = firstCar.getModel();
    
    std::cout << "Car model: " << carModel << std::endl;
  
    int carYear = firstCar.getYear();
    
    std::cout << "Car year is " << carYear << std::endl;
    return 0;
}
