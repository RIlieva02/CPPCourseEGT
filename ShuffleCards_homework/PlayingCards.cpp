//
//  PlayingCards.cpp
//  ShuffleCards_homework
//
//  Created by Ralitsa Toneva on 15.02.24.
//

#include "PlayingCards.hpp"

PlayingCards::PlayingCards(std::string type, std::string suit) :
                            type(type), suit(suit){ }

void PlayingCards::print(){
    std::cout << type << ' ' << suit << std::endl;
}
