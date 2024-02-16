//
//  Shape.hpp
//  CodingTasks_Inheritance_Homework
//
//  Created by Ralitsa Toneva on 16.02.24.
//

#ifndef Shape_hpp
#define Shape_hpp

#include <stdio.h>
#include <string>
#include <iostream>

class Shape{
public:
    Shape(std::string);
    void setColor(std::string);
    std::string getColor() const;
    virtual void draw();
protected:
    std::string color;
};
#endif /* Shape_hpp */
