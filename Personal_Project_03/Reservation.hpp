//
//  Reservation.hpp
//  Task02
//
//  Created by Ralitsa Toneva on 27.04.23.
//

#ifndef Reservation_hpp
#define Reservation_hpp

#include <stdio.h>
#include <fstream>

class Reservation{
private:
    char *reservationNumber;
   
    void copy(const Reservation& other);
    void destroy();
public:
    Reservation(const char* _reservationNumber);
    Reservation(const Reservation& other);
    ~Reservation();
    Reservation& operator=(const Reservation& other);
    
    bool operator==(const Reservation& other);
    friend std::ostream& operator<<(std::ostream& os, const Reservation& other);
};
#endif /* Reservation_hpp */
