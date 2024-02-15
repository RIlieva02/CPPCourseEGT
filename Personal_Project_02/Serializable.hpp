//
//  Serializable.hpp
//  Homework 02
//
//  Created by Ralitsa Toneva on 7.06.23.
//

#ifndef Serializable_hpp
#define Serializable_hpp

#include <stdio.h>
#include <iostream>

class Serializable{
public:
    virtual void serialize(const std::string &filename) = 0;
    virtual void deserialize(const std::string &filename) = 0;
};
#endif /* Serializable_hpp */
