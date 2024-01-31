//
//  main.cpp
//  Test - 26.01.24
//
//  Created by Ralitsa Toneva on 30.01.24.
//

#include <iostream>

int main() {
    
    //Задача 1: Напише следния код:
    // Напишете програма на С++, която:
    // Използва въведени от потребител цели числа
    // Проверява дали числото е четно или нечетни
    // Ако числото е четно, на екрана се извежда “even”, ако е нечетно – “odd”

    int number;
    
    std::cout << "Write how mwny numbers you want: ";
    std::cin >> number;
    
    for (int i = 0; i < number; i++){
        int n;
        std::cin >> n;
        
        if (n % 2 == 0){
            std::cout << "even" << std::endl;
        }
        else {
            std::cout << "odd" << std::endl;
        }
    }
   
    return 0;
}
