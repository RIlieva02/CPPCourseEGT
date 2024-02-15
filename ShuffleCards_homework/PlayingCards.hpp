//
//  PlayingCards.hpp
//  ShuffleCards_homework
//
//  Created by Ralitsa Toneva on 15.02.24.
//

#ifndef PlayingCards_hpp
#define PlayingCards_hpp

#include <stdio.h>
#include <string>
#include <iostream>

class PlayingCards{
public:
    PlayingCards(std::string, std::string);
    void print();
private:
    std::string type;
    //{"A", "K", "D", "J", "10", "9", "8", "7", "6", "5", "4", "3", "2"};
    std::string suit;
    // {"Clubs", "Diamonds", "Hearts", "Spades"};
    
};
#endif /* PlayingCards_hpp */
