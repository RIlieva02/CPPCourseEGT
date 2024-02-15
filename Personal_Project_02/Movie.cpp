//
//  Movie.cpp
//  Homework 02
//
//  Created by Ralitsa Toneva on 7.06.23.
//

#include "Movie.hpp"
#include <fstream>
#include <cstring>
#include <new>
#include <stdexcept>

Movie::Movie(std::string& _title, std::string& _director,
             unsigned _year, Time _startTime, unsigned _lenght)
                : title(_title), director(_director),
                year(_year), startTime(_startTime), lenght(_lenght){
    
}

void Movie::setTitle(const std::string& _title) {
    title = _title;
}

std::string Movie::getTitle() const {
    return title;
}

void Movie::setDirector(const std::string& _director) {
    director = _director;
}
std::string Movie::getDirector() const {
    return director;
}

void Movie::setYear(int _year) {
    year = _year;
}

int Movie::getYear() const {
        return year;
}

void Movie::setStartTime(const Time& _startTime) {
    startTime = _startTime;
}
Time Movie::getStartTime() const { return startTime; }

void Movie::setDuration(int _lenght) {
    lenght = _lenght;
}
int Movie::getDuration() const {
    return lenght;
}

    // Serialize Movie object to binary format
void Movie::serialize(std::ofstream& fileStream){
    fileStream.write(reinterpret_cast<const char*>(&year), sizeof(year));
    fileStream.write(reinterpret_cast<const char*>(&startTime), sizeof(startTime));
    
    int titleLength = title.length();
    fileStream.write(reinterpret_cast<const char*>(&titleLength), sizeof(titleLength));
    fileStream.write(title.c_str(), titleLength);
    
    int directorLength = director.length();
    fileStream.write(reinterpret_cast<const char*>(&directorLength), sizeof(directorLength));
    fileStream.write(director.c_str(), directorLength);

    fileStream.write(reinterpret_cast<const char*>(&lenght), sizeof(lenght));
}
    // Deserialize Movie object from binary format
void Movie::deserialize(std::ifstream& fileStream){
    fileStream.read(reinterpret_cast<char*>(&year), sizeof(year));
    fileStream.read(reinterpret_cast<char*>(&startTime), sizeof(startTime));

    int titleLength;
    fileStream.read(reinterpret_cast<char*>(&titleLength), sizeof(titleLength));
    title.resize(titleLength);
    fileStream.read(&title[0], titleLength);
    
    int directorLength;
    fileStream.read(reinterpret_cast<char*>(&directorLength), sizeof(directorLength));
    director.resize(directorLength);
    fileStream.read(&director[0], directorLength);

    fileStream.read(reinterpret_cast<char*>(&lenght), sizeof(lenght));
}
//void Movie::print() const {
//    std::cout << title << ' '
//                << director << ' '
//                << year << ' '
//                << startingTime.hour << ':'
//                << startingTime.min << ' '
//                << lenght << std::endl;
//}
