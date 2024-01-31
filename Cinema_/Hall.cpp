//
//  Hall.cpp
//  10.01.24
//
//  Created by Ralitsa Toneva on 10.01.24.
//

#include "Hall.hpp"

Hall::Hall(std::string hallName, int capacity){
    setName(hallName);
    setSeats(capacity);
}
Hall::Hall(std::string name, int capacity, std::vector<Screening> screeningList)
        : screeningList(screeningList){
            setName(name);
            setSeats(capacity);
}

void Hall::setScreeningList(std::vector<Screening> screeningList){
    
}
std::vector<Screening> Hall::getScreeningList(){
    return this -> screeningList;
}
void Hall::addScreening(Screening obj){
    this -> screeningList.push_back(obj);
}
void Hall::setName(std::string name){
    this -> name = name;
}
void Hall::setSeats(int seats){
    this -> seats = seats;
}
std::string Hall::getName(){
    return this -> name;
}
int Hall::getSeats(){
    return this -> seats;
}
void Hall::print(){
    std::cout << "Hall is: " << getName()
                << " with " << getSeats()
                << " seats"
                << std::endl;
    for (int i = 0; i < screeningList.size(); i++){
        std::cout << "Projectiont is: "
                    << this -> screeningList.at(i).getMovieName() << ' '
                    << this -> screeningList.at(i).getSoldTikets()
                    << " tickets"
                    << std::endl;
    }
}
