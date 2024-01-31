//
//  main.cpp
//  16.01.24
//
//  Created by Ralitsa Toneva on 16.01.24.
//

#include <iostream>
#include "Point.hpp"
#include "Rectangle.hpp"

int main() {
    
    Point p1(1, 1);
    //p1.print();
    Point p2(5, 1);
    //p2.print();
    Point p3(1, 5);
    //p3.print();
    Point p4(5, 5);
    //p4.print();
    Rectangle r1(p1, p2, p3, p4);
    //std::cout << r1.isRectangle() << std::endl;
    //std::cout << r1.isSquare() << std::endl;
    //std::cout << std::endl;
    
    Point p5(1, 1);
    //p5.print();
    Point p6(5, 1);
    //p6.print();
    Point p7(1, 5);
    //p7.print();
    Point p8(5, 5);
    //p8.print();
    Rectangle r2(p5, p6, p7, p8);
    //std::cout << r1.isRectangle() << std::endl;
    //std::cout << r1.isSquare() << std::endl;
    bool check = r2.getArea() > r1.getArea();
    
    if (check == true){
        std::cout << r2.getArea() << " > " << r1.getArea() << " -> true" << std::endl;
    }
    else {
        std::cout << r2.getArea() << " > " << r1.getArea() << " -> false" << std::endl;
    }
    
    check = r2.getArea() < r1.getArea();
    
    if (check == true){
        std::cout << r2.getArea() << " < " << r1.getArea() << " -> true" << std::endl;
    }
    else {
        std::cout << r2.getArea() << " < " << r1.getArea() << " -> false" << std::endl;
    }
    
    if (r2.getArea() == r1.getArea()){
        std::cout << r2.getArea() << " == " << r1.getArea() << " -> true" << std::endl;
    }
    else {
        std::cout << r2.getArea() << " == " << r1.getArea() << " -> false" << std::endl;
    }
    
    
    return 0;
}
