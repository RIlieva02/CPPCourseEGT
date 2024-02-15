//
//  Movie.hpp
//  Homework 02
//
//  Created by Ralitsa Toneva on 7.06.23.
//

#ifndef Movie_hpp
#define Movie_hpp

#include <stdio.h>
#include <iostream>
#include "Serializable.hpp"

struct Time{
    unsigned hours;
    unsigned minutes;
};

class Movie : public Serializable{
private:
    std::string title;
    std::string director;
    unsigned year;
    Time startTime;
    unsigned lenght;
    
    // Класът да имплементира интерфейса Serializeable
public:
    Movie(std::string& _title,
          std::string& _director,
          unsigned _year,
          Time _startTime,
          unsigned _lenght);
    
    void setTitle(const std::string& _title);
    std::string getTitle() const;

    void setDirector(const std::string& _director);
    std::string getDirector() const;

    void setYear(int _year);
    int getYear() const;

    void setStartTime(const Time& _startTime);
    Time getStartTime() const;

    void setDuration(int _duration);
    int getDuration() const;

        // Serialize Movie object to binary format
    void serialize(std::ofstream& fileStream);

        // Deserialize Movie object from binary format
    void deserialize(std::ifstream& fileStream);
};

#endif /* Movie_hpp */
