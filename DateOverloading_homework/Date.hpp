//
//  Date.hpp
//  Operator_Overloading
//
//  Created by Ralitsa Toneva on 29.01.24.
//

#ifndef Date_hpp
#define Date_hpp

#include <stdio.h>
#include <fstream>
#include <string>

class Date
{
   friend std::ostream &operator<<(std::ostream &, const Date &);
public:
   Date(int _day = 12, int _month = 12, int _year = 2002);
   void setDate(int, int, int);
   Date &operator--();
   Date operator--(int);
   const Date &operator-=(int);
   bool leapYear(int) const;
   bool endOfMonth(int) const;
    
private:
    int day;
   int month;
   int year;

   static const int days[];
   void helpIncrement();
};

#endif
