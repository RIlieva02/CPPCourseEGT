//
//  2DShape.hpp
//  Exercise
//
//  Created by Ralitsa Toneva on 16.01.24.
//

#ifndef _DShape_hpp
#define _DShape_hpp

#include <stdio.h>
#include "Shape.hpp"

class Shape2D: public Shape{
public:
    Shape2D(int);
    virtual int getArea();
    virtual void print();
};
#endif /* _DShape_hpp */
