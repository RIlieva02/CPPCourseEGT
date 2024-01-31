//
//  main.cpp
//  Arrays_homework
//
//  Created by Ralitsa Toneva on 31.01.24.
//

#include <iostream>

int main() {
    
     // Имаме n-мерен масив (всичките му елементи са 3-цифрени числа), да се изведът
    // всички елементи на масива, на които сумата на цифрите да е == 9.

    int n;
    const int check = 9;

    std::cin >> n;

    int arr[n];
    int arr2[n];
    int arr3[n];

    for (int i = 0; i < n; i++){
        std::cin >> arr[i];
    }

    int temp = 0;
    int count = 0;

    for (int i = 0; i < n; i++){
        temp = arr[i] % 10;
        temp += (arr[i] / 10) % 10;
        temp += (arr[i] / 100);
        arr2[i] = temp;
        temp = 0;
    }
    for (int i = 0; i < n; i++){
        if (arr2[i] == check){
            arr3[count] = arr[i];
            count++;
        }
    }
    for (int i = 0; i < count; i++){
        std::cout << arr3[i] << ' ';
    }
    std::cout << std::endl;
    
    return 0;
}
