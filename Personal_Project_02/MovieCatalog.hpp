//
//  MovieCatalog.hpp
//  Homework 02
//
//  Created by Ralitsa Toneva on 7.06.23.
//

#ifndef MovieCatalog_hpp
#define MovieCatalog_hpp

#include <stdio.h>
#include "Movie.hpp"
#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <ctime>

struct Date{
    unsigned day;
    unsigned month;
    unsigned year;
    unsigned minutes;
    unsigned hours;
};

class MovieCatalog : public Serializable{
private:
    // Съдържа списъл с филми
    std::vector<Movie> movies;
    std::string cinemaName;
    Date currentDate;
    
public:
    MovieCatalog(const std::string& filename);
    ~MovieCatalog();
    
    void addMovie(const Movie& movie);
    void removeMovie(const std::string& movieTitle);
    Movie* findMovie(const std::string& movieTitle);
    int countMoviesInInterval(const Date& startTime, const Date& endTime);
    
    // Serialize MovieCatalog object to binary format
    void serialize(std::ofstream& fileStream);
    // Deserialize MovieCatalog object from binary format
    void deserialize(std::ifstream& fileStream);
    
private:
    std::string getCinemaNameFromFilename(const std::string& filename);
    std::string getFilenameFromCinemaName(const std::string& cinemaName);
    Date getCurrentDate();
};
#endif /* MovieCatalog_hpp */
