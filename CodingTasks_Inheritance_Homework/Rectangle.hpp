//
//  Rectangle.hpp
//  CodingTasks_Inheritance_Homework
//
//  Created by Ralitsa Toneva on 16.02.24.
//

#ifndef Rectangle_hpp
#define Rectangle_hpp

#include <stdio.h>
#include "Shape.hpp"

class Rectangle : public Shape{
public:
    Rectangle(std::string);
    void draw() override;
};
#endif /* Rectangle_hpp */
