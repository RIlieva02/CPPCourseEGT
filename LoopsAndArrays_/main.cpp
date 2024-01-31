//
//  main.cpp
//  04.12.23
//
//  Created by Ralitsa Toneva on 4.12.23.
//

#include <iostream>

int main() {
    
    // while and do while
//
//    int counter = 1;
//    while (true) {
//        counter++;
//        if (counter == 5){
//            break;
//        }
//        std::cout << counter << std::endl;
//    }
//
//    int i = 50;
//    do {
//        std::cout << i << std::endl;
//        i++;
//    } while (i < 10);
    
    // Array
//
//    int temperature[30] = {23, 4, 3, 7, -3, 7, 2, 5, 34, 10, 19, 23, 35, 34,4, 7, 39, 23, 6, 9, 2, 14, 40, 4, 6, 8, 9, 10, -5, -2};
//
//    for (int i = 0; i < 30; i++){
//        std::cout << i << std::endl;
//    }
//    
//    int temperature[10];
//    for (int i = 0; i < 10; i++){
//        std::cout << "Enter temperature: " << std::endl;
//        std::cin >> temperature[i];
//    }
//    
//    int sum = 0;
//    for (int i = 0; i < 10; i++){
//        sum = sum + temperature[i];
//    }
//    
//    std::cout << "Sum = " << sum << std::endl;
//    std::cout << "Average = " << sum / 10 << std::endl;
//    
//    for (int i = 0; i < 10; i++){
//        std::cout << temperature[i] << std::endl;
//    }
    
    // Въвеждаме големината на масива
//
//    int n;
//    std::cout << "Enter array size: " << std::endl;
//    std::cin >> n;
//
//    int arr[n];
//
//    for (int i = 0; i < n; i++){
//        std::cout << "Enter arr[ " << i << " ]" << std::endl;
//        std::cin >> arr[i];
//    }
//
//    int sum = 0;
//    for (int i = 0; i < n; i++){
//        sum = sum + arr[i];
//    }
//
//    std::cout << "Sum = " << sum << std::endl;
//    std::cout << "Average = " << sum / double(n) << std::endl;
//
//    for (int i = 0; i < n; i++){
//        std::cout << arr[i] << std::endl;
//    }
    
    // Задача

    int temperature[] = {-23, 4, -3, 7, -3, 7, 2, 5, 34, -10, 19,
                            23, -35, -34,4, 7, 39, 23, -6, 9, -2, 14,
                            40, -4, 6, 8, 9, 10, -5, -2};
    
    int size = sizeof(temperature) / 4;
    int count = 0;
    
    for (int i = 0; i < size; i++){
        if (temperature[i] > 0){
            count++;
        }
    }
    
    std::cout << "Positive temps: " << count << std::endl;
    return 0;
}
