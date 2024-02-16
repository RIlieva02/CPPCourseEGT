//
//  Circle.hpp
//  CodingTasks_Inheritance_Homework
//
//  Created by Ralitsa Toneva on 16.02.24.
//

#ifndef Circle_hpp
#define Circle_hpp

#include <stdio.h>
#include "Shape.hpp"

class Circle : public Shape{
public:
    Circle(std::string);
    void draw() override;
};

#endif /* Circle_hpp */
