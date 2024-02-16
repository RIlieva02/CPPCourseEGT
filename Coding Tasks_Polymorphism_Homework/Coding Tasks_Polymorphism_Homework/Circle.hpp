//
//  Circle.hpp
//  Coding Tasks_Polymorphism_Homework
//
//  Created by Ralitsa Toneva on 16.02.24.
//

#ifndef Circle_hpp
#define Circle_hpp

#include <stdio.h>
#include "Shape.hpp"

class Circle : public Shape{
public:
    Circle(double);
    void setRadius(double);
    double getRadius() const;
    double area() override;
private:
    double radius;
};
#endif /* Circle_hpp */
