//
//  main.cpp
//  07.12.23
//
//  Created by Ralitsa Toneva on 7.12.23.
//

#include <iostream>

int main() {
    
    // Двумерни масиви
//
//    int arr[2][4] = {
//        {11, 12, 45, 55},
//        {23, 45, 56, 77}
//    };
//
//    for (int i = 0; i < 2; i++){
//        for (int j = 0; j < 4; j++){
//            std::cout << arr[i][j] << ' ';
//        }
//        std::cout << std::endl;
//    }
    
    // Друг запис
//
//    int rows;
//    int cols;
//
//    std::cin >> rows;
//    std::cin >> cols;
//
//    int numbers[rows][cols];
//
//    for (int i = 0; i < rows; i++){
//        for (int j = 0; j < cols; j++){
//            std::cin >> numbers[i][j];
//        }
//    }
//
//    for (int i = 0; i < rows; i++){
//        for (int j = 0; j < cols; j++){
//            std::cout << numbers[i][j] << ' ';
//        }
//        std::cout << std::endl;
//    }
    
    // Двумерен масив, искаме да намерим произведението на
    // елементите, които се делат на 5
//
//    int rows;
//    int cols;
//    long product = 1;
//    const int number = 5;
//
//    std::cin >> rows;
//    std::cin >> cols;
//
//    int arr[rows][cols];
//
//    for (int i = 0; i < rows; i++){
//        for (int j = 0; j < cols; j++){
//            std::cin >> arr[i][j];
//        }
//    }
//
//    for (int i = 0; i < rows; i++){
//        for (int j = 0; j < cols; j++){
//            if (arr[i][j] % number == 0){
//                product = product * arr[i][j];
//            }
//        }
//    }
//
//    std::cout << "Product is: " << product << std::endl;
    
    // Колко дни в годината е имало над 20 градуса
//
//    int rows;
//    int cols;
//    const int number = 20;
//    int count = 0;
//
//    std::cin >> rows;
//    std::cin >> cols;
//
//    int arr[rows][cols];
//
//    for (int i = 0; i < rows; i++){
//        for (int j = 0; j < cols; j++){
//            std::cin >> arr[i][j];
//        }
//    }
//    for (int i = 0; i < rows; i++){
//        for (int j = 0; j < cols; j++){
//            if (arr[i][j] == number){
//                count++;
//            }
//        }
//    }
//
//    std::cout << "Days: " << count << std::endl;
    
    // За да изведем в кои месеци е имало над 20 градуса
    
    int rows;
    int cols;
    const int number = 20;
    int count = 0;
    const int month = 12;
    
    std::cin >> rows;
    std::cin >> cols;
    
    int arr[rows][cols];
    std::string months[month] = {"January", "February", "March", "April",
                                "May", "June", "July", "August", "September",
                                "Octomber", "November", "December"
    };
    
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            std::cin >> arr[i][j];
        }
    }
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            if (arr[i][j] == number){
                std::cout << "Month is: " << months[i] << std::endl;
                std::cout << "Day is: " << j + 1 << std::endl;
                count++;
            }
        }
    }
    
    std::cout << "Days count: " << count << std::endl;
    return 0;
}
