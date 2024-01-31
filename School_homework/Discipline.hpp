//
//  Discipline.hpp
//  School
//
//  Created by Ralitsa Toneva on 8.01.24.
//

#ifndef Discipline_hpp
#define Discipline_hpp

#include <stdio.h>
#include <string>
#include <iostream>

class Discipline{
public:
    Discipline(std::string, int, int);
    void printDis();
private:
    std::string name;
    int lecturesCount;
    int exercisesCount;
};


#endif /* Discipline_hpp */
