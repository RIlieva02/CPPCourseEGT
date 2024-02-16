//
//  Rectangle.hpp
//  Coding Tasks_Polymorphism_Homework
//
//  Created by Ralitsa Toneva on 16.02.24.
//

#ifndef Rectangle_hpp
#define Rectangle_hpp

#include <stdio.h>
#include "Shape.hpp"

class Rectangle : public Shape{
public:
    Rectangle(double, double);
    void setHeight(double);
    double getHeight () const;
    void setWight(double);
    double getWight() const;
    double area() override;
private:
    double height;
    double wight;
};

#endif /* Rectangle_hpp */
