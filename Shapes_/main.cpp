//
//  main.cpp
//  Exercise
//
//  Created by Ralitsa Toneva on 16.01.24.
//

#include <iostream>
#include <vector>
#include "Shape.hpp"
#include "Shape2D.hpp"
#include "Shape3D.hpp"

int main() {
    
    Shape *ptr1 = new Shape2D(30);
    Shape *ptr2 = new Shape3D(15, 20);
    
    std::vector<Shape *> myShapes;
    myShapes.push_back(ptr1);
    myShapes.push_back(ptr2);
    
    for (int i = 0; i < myShapes.size(); i++){
        myShapes.at(i) -> print();
        myShapes.at(i) -> getArea();
    }
    return 0;
}
