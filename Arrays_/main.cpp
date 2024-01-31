//
//  main.cpp
//  06.12.23
//
//  Created by Ralitsa Toneva on 6.12.23.
//

#include <iostream>

int main() {
   
    // N - мерен масив, намерете елемент k и следете индекса му ако няма елементи изведдете -1
//
//    int n;
//    char k;
//
//    std::cin >> n;
//    std::cin >> k;
//
//    char arr[n];
//    int foundIndex = -1;
//
//    for (int i = 0; i < n; i++){
//        std::cin >> arr[i];
//    }
//    for (int i = 0; i < n; i++){
//        if (arr[i] == k){
//            foundIndex = i;
//            break;
//        }
//    }
//
//    std::cout << foundIndex << std::endl;
    
    // Колко пъти числото k се намира в масива
//
//    int n;
//    char k;
//
//    std::cin >> n;
//    std::cin >> k;
//
//
//    char arr[n];
//    int count = 0;
//
//    for (int i = 0; i < n; i++){
//        std::cin >> arr[i];
//    }
//    for (int i = 0; i < n; i++){
//        if (arr[i] == k){
//            count++;
//        }
//    }
//
//    std::cout << count << std::endl;
    
    // Да намерим максималният елемент и какъв му е индекса
//
//    int n;
//    int maxEl = 0;
//    int maxIndex = 0;
//
//    std::cin >> n;
//
//    int arr[n];
//
//    for (int i = 0; i < n; i++){
//        std::cin >> arr[i];
//    }
//    for (int i = 0; i < n; i++){
//        if (maxEl <= arr[i]){
//            maxEl = arr[i];
//            maxIndex = i;
//        }
//    }
//
//    std::cout << "Element: " << maxEl << " Index: " << maxIndex << std::endl;
    
    // Имаме n мерен масив да се намерят минималният и максималният елемент
//
//    int n;
//    int min;
//    int max;
//
//    std::cin >> n;
//
//    int arr[n];
//
//    for (int i = 0; i < n; i++){
//        std::cin >> arr[i];
//    }
//
//    max = arr[0];
//    min = arr[0];
//    for (int i = 0; i < n; i++){
//        if (arr[i] > max){
//            max = arr[i];
//        }
//        else if(arr[i] < min){
//            min = arr[i];
//        }
//    }
//
//    std::cout << "Max: " << max << " Min: " << min << std::endl;
    
    // Намерете най-малкия елемент в масива и изведете индексите, на които се намира той.
//
//    int n;
//    int min;
//
//    std::cin >> n;
//
//    int arr[n];
//    int minIndex[n];
//    int count = 0;
//
//    for (int i = 0; i < n; i++){
//        std::cin >> arr[i];
//    }
//
//    min = arr[0];
//
//    for (int i = 0; i < n; i++){
//        if (arr[i] < min){
//            min = arr[i];
//        }
//    }
//
//    for (int i = 0; i < n; i++){
//        if (min == arr[i]){
//            minIndex[count] = i;
//            count++;
//        }
//    }
//    for (int i = 0; i < count; i++){
//        std::cout << minIndex[i] << ' ';
//    }
//
//    std::cout << std::endl;
//
    // Да изведем числата от масив, които са по-големи от средното
    //  аритметично на елементите на масива
//
//    int n;
//    int average = 0;
//
//    std::cin >> n;
//
//    int arr[n];
//
//    for (int i = 0; i < n; i++){
//        std::cin >> arr[i];
//    }
//
//    for (int i = 0; i < n; i++){
//        average += arr[i];
//    }
//
//    average /= n;
//
//    std::cout << "Average = " << average << std::endl;
//
//    for (int i = 0; i < n; i++){
//        if (average <= arr[i]){
//            std::cout << arr[i] << ' ';
//        }
//    }
//
//    std::cout << std::endl;
    
    return 0;
}
