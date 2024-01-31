//
//  main.cpp
//  10.01.24
//
//  Created by Ralitsa Toneva on 10.01.24.
//

#include <iostream>
#include "Screening.hpp"
#include "Hall.hpp"
#include "Cinema.hpp"

int main() {
   
    Screening sc1("Star Wars", 100);
    Screening sc2("The Goodfather", 30);
    
    std::vector<Screening> screenings;
    screenings.push_back(sc1);
    screenings.push_back(sc2);
    
    Hall h1("Hall 8", 200, screenings);
    Hall h2("Hall 9", 90, screenings);
    //h1.print();
   // h2.print();
    
    Screening sc3("Pirates of the Caribean", 130);
    Screening sc4("Indiana Jones", 40);
    
    std::vector<Screening> screening2;
    screening2.push_back(sc3);
    screening2.push_back(sc4);
    
    Hall h3("Hall 10", 120, screening2);
    //h3.print();
    
    Screening sc5("Nemo 2", 55);
    h3.addScreening(sc5);
   // h3.print();
    
    std::vector<Hall> halls;
    halls.push_back(h1);
    halls.push_back(h2);
    halls.push_back(h3);
   
    Cinema cinema("Arena", "Sofia", halls);
    cinema.print();
    
    std::string movieName;
    std::getline(std::cin, movieName);
    
    for (int i = 0; i< halls.size(); i++){
//        Hall h = halls.at(i);
        
//        std::vector<Screening> scr = halls.at(i).getScreeningList();
        
        for (int j = 0; j < halls.at(i).getScreeningList().size(); j++){
//            Screening scrObj = scr.at(j);
//            std::string currentMovieName = scr.at(j).getMovieName();
            
            if (movieName == halls.at(i).getScreeningList().at(j).getMovieName()){
                std::cout << "We found projection" << halls.at(i).getScreeningList().at(j).getMovieName()
                            << std::endl;
                halls.at(i).getScreeningList().at(j).print();
                halls.at(i).print();
            }
        }
    }
    return 0;
}
