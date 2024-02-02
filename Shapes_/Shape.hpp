//
//  Shape.hpp
//  Exercise
//
//  Created by Ralitsa Toneva on 16.01.24.
//

#ifndef Shape_hpp
#define Shape_hpp

#include <stdio.h>
#include <iostream>

class Shape{
public:
    Shape(int);
    void setA(int);
    int getA() const;
    virtual int getArea();
    virtual void print();
private:
    int a;
};
#endif /* Shape_hpp */
