//
//  Hotel.cpp
//  Task02
//
//  Created by Ralitsa Toneva on 27.04.23.
//

#include "Hotel.hpp"
#include "Room.hpp"
#include "Reservation.hpp"
#include "Customer.hpp"
#include "Time.hpp"
#include <fstream>
#include <cstring>


void Hotel::addRoom(){
    Room room1(1, "Single");
    Room room2(2, "Double");
}
void Hotel::addReservation(){
    Reservation reservation1("<empty for now>");
}
void Hotel::removeReservation(){
    
}
void Hotel::checkReservation(){
    
}
void Hotel::income(){
    Time date(5, 5, 2023, 22, 45, 39);
}
void Hotel::customer(){
    Customer customer1("Ralitsa Ilieva", 9505709, "Teteven, Vejen6 ");
}

void Hotel::copy(const Hotel& other){
    reservation = new char[strlen(other.reservation) + 1];
}
void Hotel::destroy(){
    delete[] reservation;
}

Hotel::Hotel(char *_reservation):
    reservation(new char[strlen(_reservation) + 1]){
    
    strcpy(reservation, _reservation);
}
Hotel::Hotel(const Hotel& other){
    copy(other);
}
Hotel::~Hotel(){
    destroy();
}
Hotel& Hotel::operator=(const Hotel& other){
    if(this != &other){
        destroy();
        copy(other);
    }
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Hotel& other){
    return os << other.reservation << std::endl;
}
