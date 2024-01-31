//
//  Point.hpp
//  16.01.24
//
//  Created by Ralitsa Toneva on 16.01.24.
//

#ifndef Point_hpp
#define Point_hpp

#include <stdio.h>
#include <iostream>

class Point{
public:
    Point(int, int);
    void setX(int);
    int getX() const;
    void setY(int);
    int getY() const;
    
    void print();
    
private:
    int x;
    int y;
};

#endif /* Point_hpp */
