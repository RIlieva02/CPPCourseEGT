//
//  main.cpp
//  09.12.23
//
//  Created by Ralitsa Toneva on 9.12.23.
//

#include <iostream>

int main() {
    
    // Вход датата на 1 Януари, трябва да изведем месеците, които имат петък 13

    int jan1;
    bool visokosna;
    int months[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    std::cin >> jan1 >> visokosna;

    const int size = 12;
    int monthSize[size] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    monthSize[1] += visokosna;
    int firstDay = jan1;

    for (int i = 0; i < size; i++){
        if ((firstDay + 11) % 7 == 4){
            months[i] += 1;
        }
        firstDay = (firstDay + monthSize[i]) % 7;
    }

    for (int i = 0; i < size; i++){
        std::cout << months[i] << ' ';
    }

    std::cout << std::endl;
    
    return 0;
}
