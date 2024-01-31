//
//  Rectangle.hpp
//  16.01.24
//
//  Created by Ralitsa Toneva on 16.01.24.
//

#ifndef Rectangle_hpp
#define Rectangle_hpp

#include <stdio.h>
#include <cmath>
#include "Point.hpp"

class Rectangle{
public:
    Rectangle(const Point& p1, const Point& p2, const Point& p3, const Point& p4);
    
    void setP1(const Point& p1);
    const Point& getP1() const;
    void setP2(const Point& p2);
    const Point& getP2() const;
    void setP3(const Point& p3);
    const Point& getP3() const;
    void setP4(const Point& p4);
    const Point& getP4() const;
    
    bool isRectangle() const;
    bool isSquare() const;
   // void setCoordinates(Point, Point, Point, Point);
  
    int getPerimeter() const;
    int getArea() const;
    
    bool operator==(Rectangle&);
    bool operator<(Rectangle&);
    bool operator>(Rectangle&);
    
private:
    Point p1;
    Point p2;
    Point p3;
    Point p4;
    
    int calculateLenght(int, int) const;
};

#endif /* Rectangle_hpp */
