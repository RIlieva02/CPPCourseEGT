//
//  main.cpp
//  first_program
//
//  Created by Ralitsa Toneva on 27.11.23.
//

#include <iostream>

int main() {
    
    // Всички задачи са закоментирани
    
    // Периметър на квадрат
//
//    int strana;
//
//    std::cin >> strana;
//    std::cout << "P = " << 4 * strana << std::endl;
//
//    // Лице на квадрат
//
//    std::cout << "S = "<< strana * strana << std::endl;
//
    // Разбиване на число
//
//    int a;
//
//    std::cin >> a; // Трицифрено
////    std::cout << a % 10 << std::endl;
////    std::cout << (a / 10) % 10 << std::endl;
////    std::cout << a / 100 << std::endl;
//
//    while(a > 0){
//        std::cout << a % 10 << std::endl;
//        a = a/10;
//    }
//
    
    // Четно число
//
//    int a, b, c;
//
//    std::cin >> a >> b >> c;
//
//    if ( a % 2 == 0 && b % 2 == 0 && c % 2 == 0){
//        std::cout << "Числата a, b, c са четни!" << std::endl;
//
//    }
//    else {
//        std::cout << "Не всички числа са четни!" << std::endl;
//    }
    
    // Пресмятане на секунди, минути, часове
//
//    int n;
//
//    std::cin >> n;
//
//    int sec = 60; // Секунди
//    int min = 60; // Минути
//    int secHour = sec * min; // Секунди в час
//
//    std::cout << n / secHour << std::endl; // Часове
//    std::cout << n % secHour << std::endl; // Секунди
    
    // Положителни и отрицателни числа
//
//    int a;
//
//    std::cin >> a;
//
//    if (a > 0){
//        std::cout << a * a << std::endl;
//    }
//    else {
//        std::cout << a << std::endl;
//    }
    
    // Сума на две по-големи числа
//
//    int a, b, c;
//
//    std::cin >> a >> b >> c;
//
//    if (a < b && a < c){
//        std::cout << b + c << std::endl;
//    }
//    else if (b < a && b < c){
//        std::cout << a + c << std::endl;
//    }
//    else if ( c < a && c < b ){
//        std::cout << a + b << std::endl;
//    }
    
    // Ден от седмицата
    // Първи вариант с условен оператор
//
//    int a;
//
//    std::cin >> a;
//
//    switch (a) {
//        case 1:
//            std::cout << "Понеделник" << std::endl;
//            break;
//        case 2:
//            std::cout << "Вторник" << std::endl;
//            break;
//        case 3:
//            std::cout << "Сряда" << std::endl;
//            break;
//        case 4:
//            std::cout << "Четвъртък" << std::endl;
//            break;
//        case 5:
//            std::cout << "Петък" << std::endl;
//            break;
//        case 6:
//            std::cout << "Събота" << std::endl;
//            break;
//        case 7:
//            std::cout << "Неделя" << std::endl;
//            break;
//        default:
//            std::cout << "Това не е дн от седмицата!" << std::endl;
//            break;
//    }
//
    // Втори вариант с масив
//    
//    char arr[15] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o'};
//    
//    int number;
//    
//    std::cin >> number;
//    std::cout << arr[number - 1] << std::endl;
    
    // Преобразуване на градуси
//
//    double f;
//    // (f - 32) * 5/9
//
//    std::cin >> f;
//
//    double c = (f - 32) * (5.0/9.0);
//
//    std::cout << c << std::endl;
//
    // Размяна на стойностите на две променливи
//
//    int a, b;
//    int temp;
//
//    std::cin >> a >> b;
//    std::cout << "A = " << a << " B = " << b << std:: endl;
//
//    temp = a;
//    a = b;
//    b = temp;
//
//    std::cout << "A = " << a <<" B = " << b << std:: endl;
    
    
    return 0;
}
