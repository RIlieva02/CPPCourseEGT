//
//  main.cpp
//  Exercise tasks
//
//  Created by Ralitsa Toneva on 29.11.23.
//

#include <iostream>

int main() {
    
    // Task 01
    // Въвеждане на температура в целзии и да я изведем във фаренхайт
//
//    double c;
//    double f;
//
//    std::cin >> c;
//
//    f = c * 1.8000 + 32;
//
//    std::cout << "C = " << c << " F = " << f << std::endl;
    
    // Task 02
    // Разбиване на число в обратен ред

    int number;
    int count = 0;

    std::cin >> number;

    int temp = number;

    while (temp > 0){
        count++;
        temp /= 10;
    }

    int *arr;
    arr = new int[count];

    for (int i = 0; i < count; i++){
        arr[i] = number % 10;
        number /= 10;
    }
    for (int i = count - 1; i >= 0; i--){
        std::cout << arr[i] << ' ';
    }

    std::cout << std::endl;

    delete[] arr;
    
    return 0;
}
