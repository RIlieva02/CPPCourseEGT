//
//  Hotel.hpp
//  Task02
//
//  Created by Ralitsa Toneva on 27.04.23.
//

#ifndef Hotel_hpp
#define Hotel_hpp

#include <stdio.h>
#include <fstream>

class Hotel{
private:
    char *reservation;
    
    void addRoom();
    void addReservation();
    void removeReservation();
    void checkReservation();
    void income();
    void customer();
    
    void copy(const Hotel& other);
    void destroy();
public:
    
    Hotel(char *_reservation);
    Hotel(const Hotel& other);
    ~Hotel();
    Hotel& operator=(const Hotel& other);
    
    friend std::ostream& operator<<(std::ostream os, const Hotel& other);
};

#endif /* Hotel_hpp */
