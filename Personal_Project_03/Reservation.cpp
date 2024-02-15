 //
//  Reservation.cpp
//  Task02
//
//  Created by Ralitsa Toneva on 27.04.23.
//

#include "Reservation.hpp"
#include <cstring>

void Reservation::copy(const Reservation& other){
    reservationNumber = other.reservationNumber;
}
void Reservation::destroy(){
    delete[] reservationNumber;
}

Reservation::Reservation(const char* _reservationNumber)
    : reservationNumber(new char[strlen(_reservationNumber) + 1]){
    
        strcpy(reservationNumber, _reservationNumber);
}
Reservation::Reservation(const Reservation& other){
    copy(other);
}
Reservation::~Reservation(){
    destroy();
}
Reservation& Reservation::operator=(const Reservation& other){
    if (this != &other){
        destroy();
        copy(other);
    }
    return *this;
}

bool Reservation::operator==(const Reservation& other){
    
}
std::ostream& operator<<(std::ostream& os, const Reservation& other){
    
}
