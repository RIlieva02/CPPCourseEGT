//
//  Discipline.cpp
//  School
//
//  Created by Ralitsa Toneva on 8.01.24.
//

#include "Discipline.hpp"

Discipline::Discipline(std::string _name, int _lecturesCount, int _exercisesCount){
    this -> name = _name;
    this -> lecturesCount = _lecturesCount;
    this -> exercisesCount = _exercisesCount;
}

void Discipline::printDis(){
    std::cout << this -> name  << std::endl
                << "Lectures: " << this -> lecturesCount << std::endl
                << "Exercises: " << this -> exercisesCount << std::endl;
}
