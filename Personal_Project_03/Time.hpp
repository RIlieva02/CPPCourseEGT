//
//  Time.hpp
//  Task02
//
//  Created by Ralitsa Toneva on 27.04.23.
//

#ifndef Time_hpp
#define Time_hpp

#include <stdio.h>
#include <fstream>

class Time{
private:
    unsigned year, month, day;
    unsigned hour, minute, second;
public:
    Time(unsigned _year,
         unsigned _month,
         unsigned _day,
         unsigned _hour,
         unsigned _minute,
         unsigned _second);
    
    friend std::ostream& operator<<(std::ostream& os, Time& other);
    bool operator<(Time& other);
    bool operator==(const Time& other);
    Time operator-(const Time& other) const;
    
};
#endif /* Time_hpp */
