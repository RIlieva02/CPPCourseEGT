//
//  main.cpp
//  Test - 26.01.24_2
//
//  Created by Ralitsa Toneva on 30.01.24.
//

#include <iostream>
#include "Rectangle.hpp"
#include "Circle.hpp"

int main() {
    
    // Задача 2: Напише следния код:
    // Имплементирайте следната йерархия:
    // Напишете програма на C++ в която е имплементирана проста йерархия от класове, за да демонстрирате наследяване и полиморфизъм.
    // Например: Може да създадете базов клас Shape с метод draw(), и класове Circle and Rectangle , които да “override”-нат метода draw().
    // Използвайте указател (pointer) в примера.
    
    Shape *s1 = new Shape;
    s1->draw();
    
    Rectangle *r1 = new Rectangle(5, 2);
    r1->draw();

    Circle *c1 = new Circle(3);
    c1->draw();
    
    return 0;
}
