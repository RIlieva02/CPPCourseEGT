//
//  main.cpp
//  20.12.23
//
//  Created by Ralitsa Toneva on 20.12.23.
//

#include <iostream>

    // Функции

void printHello(){
    std::cout << "Hello World!" << std::endl;
}

int sum(int a, int b){
    return a + b;
}
void printline(int start, int end){
    for (int i = start; i < end; i++){
        std::cout << i << ' ';
    }
    std::cout << std::endl;
}
void printTriangle(int start, int end){
    for (int line = 1; line <= end; line++){
        printline(1, line);
    }
    for (int line = end - 1; line >= 1; line--){
        printline(1, line);
    }
}

int getMax(int a, int b){
    if (a > b){
        return a;
    }
    else {
        return b;
    }
}

int main() {
    
    // Първа задачач
    
//    printHello();
//
//    int a, b;
//
//    std::cin >> a >> b;
//    std:: cout << sum(a, b) << std::endl;
    
    // Втора задача
//
//    int n;
//    std::cin >> n;
//
//    printTriangle(1, n);
    
    // getMax
//
//    int a, b;
//
//    std::cin >> a >> b;
//    std::cout << "Max = " << getMax(a, b) << std::endl;
    
    int arr[100];
    int n;
    
    std::cin >> n;
    
    for (int i = 0; i < n; i++){
        std::cin >> arr[i];
    }
    
    int temp;
    
    // Bubble sort
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (arr[j] < arr[j - 1]){
                temp = arr[j];
                arr[j] = arr[j - 1];
                
                
            }
        }
    }
    
    return 0;
}
