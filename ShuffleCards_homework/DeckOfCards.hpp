//
//  DeckOfCards.hpp
//  ShuffleCards_homework
//
//  Created by Ralitsa Toneva on 15.02.24.
//

#ifndef DeckOfCards_hpp
#define DeckOfCards_hpp

#include <stdio.h>
#include <iostream>
#include <vector>
#include "PlayingCards.hpp"

class DeckOfCards{
public:
    DeckOfCards();
    void raffleShuffle();
    void displayDeck();
private:
    std::vector<PlayingCards> deck;
    std::vector<PlayingCards> firstHalf;
    std::vector<PlayingCards> secondHalf;
};
#endif /* DeckOfCards_hpp */
