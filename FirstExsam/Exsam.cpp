//
//  main.cpp
//  Exsam
//
//  Created by Ralitsa Ilieva on 13.12.23.
//

#include <iostream>

int main() {
    
    // Всички задачи са закоментирани
    
    // Задача 1
//
//    int n; // Въвеждаме числото, което искаме да проверим дали се дели на 9 и 11
//
//    // Съобщение за потребителя изискващо да въведе своето число
//    std::cout << "Please write your number: ";
//
//    // Въвеждане на самото число от клавиатурата (потребителя)
//    std::cin >> n;
//
//    //Проверка дали числото се дели на 9 и 11 едновременно, чрез оператора &&
//    if (n % 9 == 0 && n % 11 == 0){
//
//        // Извеждаме съобщение, че числото се дели на 9 и 11
//        std::cout << n << " is divisible by 9 and 11." << std::endl;
//    }
//    else {
//
//        // Извеждаме съобщение, че числото не се дели на 9 и 11
//        std::cout << n <<  " is not divisible by 9 and 11" << std::endl;
//    }
//
    // Задача 2
//
//    int firstNumber; // Първото число от 4-цифреното число
//    int thirdNumber; // Третото число от 4-цифреното число
//    int count = 0; // Брояч
//
//    // Въртим цикъл от интервала [1000,9999], включително числата 1000 и 9999
//    for (int i = 1000; i <= 9999; i++){
//        firstNumber =  i / 1000; // Променливата взима първото число от 4-цифреното
//        thirdNumber = (i / 10) % 10; // Променливата взима третото число от 4-цифреното
//
//        // Проверяваме дали двете числа са еднакви
//        if (firstNumber == thirdNumber){
//            count++; // Ако е вярно броячът ни се увеличава с 1
//        }
//    }
//
//    // Извеждаме резултата
//    std::cout << "The number is: " << count << std::endl;
    
    // Задача 3
//
//    int n; // Размерът на масива
//    int count = 0; // Брояч
//    int min = 0; // Помощна променлива, за намирането само на положителните числа
//
//    // Съобщение за потребителя изискващо да въведе размера на масива
//    std::cout << "Please write size of the arr: ";
//
//    // Въвеждане на размера на масива от клавиатурата (потребителя)
//    std::cin >> n;
//
//    // Инициализация на масива
//    int A[n];
//
//    // Съобщение за потребителя изискващо да въведе елементите на масива
//    std::cout << "Please write your elements: ";
//
//    // Въвеждане на елементите на масива, чрез цикъл от клавиатурата (потребителя)
//    for (int i = 0; i < n; i++){
//        std::cin >> A[i];
//    }
//
//    // Обхождане на масива чрез цикъл
//    for (int i = 0; i < n; i++){
//
//        //Проверка, кои елементи са положителни, чрез помощната ни променлива
//        if (min < A[i]){
//            count++; // Ако числото е положително броячът ни се увеличава с 1
//        }
//    }
//
//    // Извеждаме резултата
//    std::cout << "The number of positive numbers is: " << count << std::endl;
    
    // Задача 4
//
//    int n, m; // Броят на редовете и колоните на двумерния масив
//    int sum = 0; // Променлива, която съхранява сумата
//    int max = 0; // Помощна променлива, за намирането само на отрицателните числа
//
//
//    // Съобщение за потребителя изискващо да въведе броя на редовете
//    std::cout << "Please write how many rows you want: ";
//
//    // Въвеждане на броя на редовете на масива от клавиатурата (потребителя)
//    std::cin >> n;
//
//    // Съобщение за потребителя изискващо да въведе броя на колоните
//    std::cout << "Please write how many cols you want: ";
//
//    // Въвеждане на броя на колоните на масива от клавиатурата (потребителя)
//    std::cin >> m;
//
//    // Инициализация на масива
//    int A[n][m];
//
//    // Съобщение за потребителя изискващо да въведе елементите на масива
//    std::cout << "Please write your elements: " << std::endl;
//
//    // Въвеждане на елементите на двумерния масив, чрез вложен цикъл
//    for (int i = 0; i < n; i++){
//        for (int j = 0; j < m; j++){
//            std::cin >> A[i][j];
//        }
//    }
//
//    // Обхождане на масива
//    for (int i = 0; i < n; i++){
//
//        // Проверка дали редът на двумерния масив е с нечетен индекс
//        if (i % 2 != 0){
//            for (int j = 0; j < m; j++){
//
//                // Проверка дали числото е отрицателно
//                if (max > A[i][j]){
//
//                    // Събиране на отрицателните числа
//                    sum += A[i][j];
//                }
//            }
//        }
//    }
//
//    // Извеждаме резултата
//    std::cout << "The sum of the numbers is: " << sum << std::endl;
//
    return 0;
}
