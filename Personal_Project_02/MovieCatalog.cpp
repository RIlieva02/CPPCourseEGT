//
//  MovieCatalog.cpp
//  Homework 02
//
//  Created by Ralitsa Toneva on 7.06.23.
//

#include "MovieCatalog.hpp"

MovieCatalog::MovieCatalog(const std::string& filename)
    : cinemaName(getCinemaNameFromFilename(filename)), currentDate(getCurrentDate()) {
            
    std::ifstream file(filename, std::ios::binary);
    if (file.is_open()){
        deserialize(file);
        file.close();
    }
}

MovieCatalog::~MovieCatalog() {
    std::ofstream file(getFilenameFromCinemaName(cinemaName), std::ios::binary);
    if (file.is_open()) {
        serialize(file);
        file.close();
    }
}

void MovieCatalog::addMovie(const Movie& movie) {
    movies.push_back(movie);
}
void MovieCatalog::removeMovie(const std::string& movieTitle) {
    movies.erase(
        std::remove_if(
            movies.begin(),
            movies.end(),
            [&](const Movie& movie) {
                return movie.getTitle() == movieTitle;
            }
        ),
        movies.end()
    );
}

Movie* MovieCatalog::findMovie(const std::string& movieTitle) {
    for (auto& movie : movies) {
        if (movie.getTitle() == movieTitle) {
            return &movie;
        }
    }
    return nullptr;
}

int MovieCatalog::countMoviesInInterval(const Date& startTime, const Date& endTime) {
    int count = 0;
    for (const auto& movie : movies) {
        const Time& movieStartTime = movie.getStartTime();
        const int movieDuration = movie.getDuration();

        if (movieStartTime.hours < startTime.hours ||
            (movieStartTime.hours == startTime.hours &&
             movieStartTime.minutes < startTime.minutes))
            continue;

        int movieEndTimeMinutes = movieStartTime.minutes + movieDuration;
        int movieEndTimeHours = movieStartTime.hours;
        if (movieEndTimeMinutes >= 60) {
            movieEndTimeMinutes -= 60;
            movieEndTimeHours += 1;
        }
        if (movieEndTimeHours > endTime.hours ||
            (movieEndTimeHours == endTime.hours &&
             movieEndTimeMinutes > endTime.minutes))
            continue;

            count++;
        }

        return count;
    }

    // Serialize MovieCatalog object to binary format
void MovieCatalog::serialize(std::ofstream& fileStream) {
    int cinemaNameLength = cinemaName.length();
    fileStream.write(reinterpret_cast<const char*>(&cinemaNameLength), sizeof(cinemaNameLength));
    fileStream.write(cinemaName.c_str(), cinemaNameLength);
    
    fileStream.write(reinterpret_cast<const char*>(&currentDate), sizeof(currentDate));

    int numMovies = movies.size();
    fileStream.write(reinterpret_cast<const char*>(&numMovies), sizeof(numMovies));

    for (const auto& movie : movies) {
        movie.serialize(fileStream);
    }
}

    // Deserialize MovieCatalog object from binary format
void MovieCatalog::deserialize(std::ifstream& fileStream) {
    int cinemaNameLength;
    fileStream.read(reinterpret_cast<char*>(&cinemaNameLength), sizeof(cinemaNameLength));
    cinemaName.resize(cinemaNameLength);
    fileStream.read(&cinemaName[0], cinemaNameLength);

    fileStream.read(reinterpret_cast<char*>(&currentDate), sizeof(currentDate));

    int numMovies;
    fileStream.read(reinterpret_cast<char*>(&numMovies), sizeof(numMovies));

    movies.clear();
    movies.reserve(numMovies);
    for (int i = 0; i < numMovies; i++) {
        Movie movie("", "", 0, {0, 0}, 0);
        movie.deserialize(fileStream);
        movies.push_back(movie);
    }
}

std::string MovieCatalog::getCinemaNameFromFilename(const std::string& filename) {
    size_t dotPos = filename.find_last_of(".");
    size_t slashPos = filename.find_last_of("/");
    if (dotPos == std::string::npos) {
        dotPos = filename.length();
    }
    if (slashPos == std::string::npos) {
        slashPos = 0;
    }
    else {
        slashPos++;
    }
    return filename.substr(slashPos, dotPos - slashPos);
}

std::string MovieCataloggetFilenameFromCinemaName(const std::string& cinemaName) {
    return cinemaName + ".bin";
}

Date MovieCataloggetCurrentTime() {
    std::time_t currentTime = std::time(nullptr);
    std::tm* now = std::localtime(&currentTime);
    Date time;
    time.hours = now->tm_hour;
    time.minutes = now->tm_min;
    return time;
}

Date MovieCatalog::getCurrentDate() {
    std::time_t currentTime = std::time(nullptr);
    std::tm* now = std::localtime(&currentTime);
    Date date;
    date.day = now->tm_mday;
    date.month = now->tm_mon + 1;
    date.year = now->tm_year + 1900;
    return date;
}
