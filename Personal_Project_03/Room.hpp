//
//  Room.hpp
//  Task02
//
//  Created by Ralitsa Toneva on 25.04.23.
//

#ifndef Room_hpp
#define Room_hpp

#include <stdio.h>
#include <fstream>
#include <iostream>

class Room{
private:
    unsigned roomNumber;
    const char *name;
    double price;
    
    double roomPrice();
    void copy(const Room& other);
    void destroy();
public:
    Room(unsigned _roomnumber, const char *_name);
    Room(const Room& other);
    ~Room();
    Room& operator=(const Room& other);

    bool operator==(const Room& other) const;
    friend std::ostream& operator<<(std::ostream &os, const Room& other);
};

#endif /* Room_hpp */
