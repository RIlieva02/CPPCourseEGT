//
//  Shape3D.hpp
//  Exercise
//
//  Created by Ralitsa Toneva on 16.01.24.
//

#ifndef Shape3D_hpp
#define Shape3D_hpp

#include <stdio.h>
#include "Shape.hpp"

class Shape3D: public Shape{
public:
    Shape3D(int, int);
    virtual int getArea();
    virtual void print();
    int getVolume();
    void setH(int);
    int getH() const;
private:
    int h;
};

#endif /* Shape3D_hpp */
