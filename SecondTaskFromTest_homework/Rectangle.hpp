//
//  Rectangle.hpp
//  Test - 26.01.24_2
//
//  Created by Ralitsa Toneva on 30.01.24.
//

#ifndef Rectangle_hpp
#define Rectangle_hpp

#include <stdio.h>
#include "Shape.hpp"

class Rectangle: public Shape{
public:
    Rectangle(int, int);
    void setWidht(int);
    int getWidth() const;
    void setHeight(int);
    int getHeight() const;
    virtual void draw() override;
private:
    int width;
    int height;
};
#endif /* Rectangle_hpp */
