//
//  main.cpp
//  15.01.24
//
//  Created by Ralitsa Toneva on 15.01.24.
//

#include <iostream>

void printArr(int arr[], int size){
    for (int i = 0; i < size; i++){
        std::cout << arr[i] << ' ';
    }
}

    // Първа задача;

//double calculate(double hours){
//
////    double threeH = 2.0;
////    double price = 0.5;
////    double maxPrice = 10.0;
////    double finalPrice = 0.0;
////    double maxHours = 24.0;
////
////    for (double i = 0; i <= time; i++){
////        if (i <= threeH){
////            finalPrice = threeH;
////        }
////        else if ((i > threeH) && (finalPrice < maxPrice)){
////            finalPrice += price;
////        }
////        else if (i == maxHours){
////            finalPrice = maxPrice;
////        }
////    }
//
//    double tax = 2;
//    double result = 0;
//
//    if (hours <= 3){
//        result = tax;
//    }
//    if (hours > 3){
//        double overHours = ceil(hours - 3);
//        double overTax = overHours * 0.5;
//        result = tax + overHours;
//    }
//    if (result >= 10){
//        result = 10;
//    }
//
//    return result;
//}

    // Втора задача

void planeSeats(int seats[], int size){
    int newS;
    std::cout << "Seat: ";
    std::cin >> newS;
    
    if (seats[newS] == 0){
        seats[newS] = 1;
    }
    else {
        std::cout << "This seat is taken!" << std::endl;
        for (int i = 0; i < size; i++){
            if (seats[i] == 0){
                std::cout << "Your seat is " << i << std::endl;
                seats[i] = 1;
                break;
            }
        }
    }
}

int main() {
    
    // Първа задача
//
//    double time;
//
//    std::cout << "First car: ";
//    std::cin>> time;
//    std::cout << calculate(time) << std::endl;
//
//    std::cout << "Second car: ";
//    std::cin>> time;
//    std::cout << calculate(time) << std::endl;
    
    // Втора задача
    
    const int arrSize = 10;
    int seats[arrSize] = {};
    int seat;
    
    std::cout << "Seat: ";
    std::cin >> seat;
    
    seats[seat] = 1;
    int customers = 9;
    int currentCustomer = 0;
    
    while(currentCustomer < customers){
        planeSeats(seats, arrSize);
        currentCustomer++;
    }
    printArr(seats, arrSize);
    
    return 0;
}
