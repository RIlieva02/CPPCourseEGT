//
//  Box.hpp
//  Box
//
//  Created by Ralitsa Toneva on 29.01.24.
//

#ifndef Box_hpp
#define Box_hpp

#include <stdio.h>
#include <fstream>

class Box{
    friend std::ostream &operator<<( std::ostream &, const Box& );
public:
    Box(double _width = 0.0, double _lenght = 0.0, double _height = 0.0);
    Box& operator=(const Box&);
    
    void setWidth(double);
    double getWeight();
    void setLenght(double);
    double getLenght();
    void setHeight(double);
    double getHeight();
    
    void copy(const Box&);
    Box operator+(const Box&) const;
private:
    double width;
    double length;
    double height;
};
#endif /* Box_hpp */
