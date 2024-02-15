//
//  Room.cpp
//  Task02
//
//  Created by Ralitsa Toneva on 25.04.23.
//

#include "Room.hpp"
#include <cstring>
#include <fstream>

double Room::roomPrice(){
    
    char room1[] = "Single";
    char room2[] = "Double";
    char room3[] = "Siute";
    
    size_t arraySize = strlen(name);
    int count = 0;
    
    for (size_t i = 0; i < arraySize; i++){
        if (name[i] == room1[i]){
            count++;
        }
    }
    if(count == arraySize){
        price = 40;
    }
    else {
        count = 0;
    }
    
    for (size_t i = 0; i < arraySize; i++){
        if (name[i] == room2[i]){
            count++;
        }
    }
    if(count == arraySize){
        price = 65;
    }
    else{
        count = 0;
    }
    
    for (size_t i = 0; i < arraySize; i++){
        if (name[i] == room3[i]){
            count++;
        }
    }
    if(count == arraySize){
        price = 90;
    }
    
    return price;
}
void Room::copy(const Room& other){
    roomNumber = other.roomNumber;
    name = new char[strlen(other.name) + 1];
    price = other.price;
}
void Room::destroy(){
    delete[] name;
}

Room::Room(unsigned _roomnumber, const char *_name):
    roomNumber(_roomnumber),
    name(new char[strlen(_name) + 1]){
        
    //strcpy(name, _name);
    price = roomPrice();
}
Room::Room(const Room& other){
    copy(other);
}
Room::~Room(){
    destroy();
}
Room& Room::operator=(const Room& other){
    if (this != &other){
        destroy();
        copy(other);
    }
    return *this;
}

bool Room::operator==(const Room& other) const{
    if (roomNumber != other.roomNumber){
        return false;
    }
    else if(strcasecmp(name, other.name)){
        return true;
    }
    
    return false;
}
std::ostream& operator<<(std::ostream &os, const Room &other){
    return os << "№: " << other.roomNumber << std::endl
                << "Type: " << other.name << std::endl
                << "Price: " << other.price << std::endl;
}
   

