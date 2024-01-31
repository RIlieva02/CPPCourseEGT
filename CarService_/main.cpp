//
//  main.cpp
//  04.01.24
//
//  Created by Ralitsa Toneva on 4.01.24.
//

#include <iostream>
#include "Car.hpp"
#include <vector>
#include "CarService.hpp"


int main() {
    
    std::vector<Car> cars;
    CarService cs;
    
    for (int i = 0; i < 2; i++){
        Car myCar = cs.inputDate();
        cars.push_back(myCar);
    }
    for (int i = 0; i < cars.size(); i++){
        cars.at(i).displayMessage();
    }
    return 0;
}
