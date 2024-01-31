//
//  main.cpp
//  03.01.24
//
//  Created by Ralitsa Toneva on 3.01.24.
//

#include <iostream>
#include <string>

    // Функции
//
//void printSignOfNumber(){
//    int number;
//
//    std::cout << "Enter number: ";
//    std::cin >> number;
//
//    if (number > 0){
//        std::cout << "+";
//    }else {
//        std::cout << "-";
//    }
//}

int main(){
    
    // String
    // Намиране на дължина
    
//    std::string s = "Hello, C++";
//    int len = s.length();
//    char ch = s.at(4);
//
//    std::cout << len << ' ' << ch << std::endl;
    
    // Конкатенация (слепване)
    
    std::string a = "Asen";
    std::string b = "Asenov";
    
    std::cout << a.compare(b) << std::endl;
    
    std::string c = a.append(b);
    
    std::cout << c << std::endl;
    
    // Добра практика за използване на конкатенация
    
    std::string result = "";
    
    for (int i = 0; i < 10; i++){
        result = result.append("a");
    }
    
    std::cout << result << std::endl;
    
    return 0;
}
