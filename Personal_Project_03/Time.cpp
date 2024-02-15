//
//  Time.cpp
//  Task02
//
//  Created by Ralitsa Toneva on 27.04.23.
//

#include "Time.hpp"
#include <ctime>

Time::Time(unsigned _year, unsigned _month, unsigned _day,
     unsigned _hour, unsigned _minute, unsigned _second)
        : year(_year), month(_month), day(_day),
        hour(_hour), minute(_minute), second(_second){}

std::ostream& operator<<(std::ostream& os, Time& other){
    return os << other.day << '.'
                << other.month << '.'
                << other.year << ' '
                << other.hour << ':'
                << other.minute << ':'
                << other.second << std::endl;
}
bool Time::operator<(Time& other){
    if (other.minute < 60){
        return true;
    }
    else{
        other.minute = other.minute - 60;
        other.hour = other.hour + 1;
        return true;
    }
    return false;
}
bool Time::operator==(const Time& other){
    if (year != other.year &&
        month != other.month &&
        day != other.day &&
        hour != other.hour &&
        minute != other.minute &&
        second != other.second){
        
        return false;
    }
    
    return true;
}
Time Time::operator-(const Time& other) const{
    return *this - other;
}
 
