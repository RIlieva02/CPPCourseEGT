//
//  main.cpp
//  ForLoop_homework
//
//  Created by Ralitsa Toneva on 31.01.24.
//

#include <iostream>

int main() {
   
    // Task 03
    // Сумата на нечетните числа (1 - 100), които не се делят на 7
//
//    const int number = 7;
//    const int size = 100;
//    int sum = 0;
//
//    for (int i = 0; i <= size; i++){
//        if (i % number == 0){
//            sum = sum + i;
//            std::cout << i << ' ';
//        }
//    }
//    std::cout << std::endl << "Sum = " << sum << std::endl;
    
    // Task 04
    // Разбиване на трицифрени числа и намиране на сумата им

    const int size = 1000;
    const int number = 3;
    int sum = 0;

    for (int i = 100; i < size; i++){
        int temp = i;
        for (int j = 0; j < number; j++){
            sum = sum + (temp % 10);
            temp = temp / 10;
        }
        std::cout << sum << std::endl;
        sum = 0;
    }
    std::cout << std::endl;
    
    return 0;
}
