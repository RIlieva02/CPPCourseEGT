//
//  main.cpp
//  11.12.23
//
//  Created by Ralitsa Toneva on 11.12.23.
//

#include <iostream>

int main() {
  
    // Двумерни масиви
//    
//    int n;
//    
//    std::cin >> n;
//    
//    int matrix[n][n];
//    
//    for (int i = 0; i < n; i++){
//        for (int j = 0; j < n; j++){
//            std::cin >> matrix[i][j];
//        }
//    }
//    
//    int sum = 0;
//    
//    for (int i = 0; i < n; i++){
//        for (int j = 0; j < n; j++){
//            if (i == j){
//                sum += matrix[i][j];
//                std::cout << matrix[i][j] << ' ';
//            }
//        }
//        std::cout << std::endl;
//    }
//    
//    std::cout << "Sum = " << sum << std::endl;
    
    // Най-големият елемент от елементите под главния диагонал
    
    int n;
    int max = 0;
  
    std::cin >> n;
  
    int matrix[n][n];
  
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            std::cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i > j){
                if (matrix[i][j] > max){
                    max = matrix[i][j];
                }
            }
        }
    }
    
    std::cout << "Max = " << max << std::endl;
    
    return 0;
}
