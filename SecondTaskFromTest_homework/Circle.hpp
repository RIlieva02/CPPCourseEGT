//
//  Circle.hpp
//  Test - 26.01.24_2
//
//  Created by Ralitsa Toneva on 30.01.24.
//

#ifndef Circle_hpp
#define Circle_hpp

#include <stdio.h>
#include "Shape.hpp"

class Circle: public Shape{
public:
    Circle(int);
    void setRadius(int);
    int getradius() const;
    virtual void draw() override;
private:
    int radius;
};
#endif /* Circle_hpp */
