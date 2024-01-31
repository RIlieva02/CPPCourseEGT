//
//  Screening.cpp
//  10.01.24
//
//  Created by Ralitsa Toneva on 10.01.24.
//

#include <iostream>
#include "Screening.hpp"

Screening::Screening(std:: string movieName, int tickets){
    setMovieName(movieName);
    setSoldTikets(tickets);
}

void Screening::setMovieName(std::string movieName){
    if (movieName.length() > 5){
        this -> movieName = movieName;
    }
    else {
        this -> movieName = " ";
        std::cerr << "Movie name too short!" << std::endl;
    }
}
void Screening::setSoldTikets(int tickets){
    if (tickets >= 0){
        this -> soldTickets = tickets;
    }
    else {
        this -> soldTickets = 0;
    }
}

std::string Screening::getMovieName(){
    return this -> movieName;
}

int Screening::getSoldTikets(){
    return this ->soldTickets;
}
void Screening::print(){
    std::cout << "Project is: "
                << this -> getMovieName() << ' '
                << this -> getSoldTikets()
                << " tickets"
                << std::endl;
}
