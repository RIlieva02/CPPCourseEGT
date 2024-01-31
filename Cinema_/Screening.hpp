//
//  Screening.hpp
//  10.01.24
//
//  Created by Ralitsa Toneva on 10.01.24.
//

#ifndef Screening_hpp
#define Screening_hpp

#include <stdio.h>
#include <string>

class Screening{
public:
    Screening(std::string, int);
    void setMovieName(std::string);
    void setSoldTikets(int);
    std::string getMovieName();
    int getSoldTikets();
    void print();
private:
    std::string movieName;
    int soldTickets;
};

#endif /* Screening_hpp */
