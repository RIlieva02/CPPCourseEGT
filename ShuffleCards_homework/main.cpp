//
//  main.cpp
//  ShuffleCards_homework
//
//  Created by Ralitsa Toneva on 15.02.24.
//

#include <iostream>
#include "DeckOfCards.hpp"

int main(int argc, const char * argv[]) {
    
    DeckOfCards firstDeck;
    firstDeck.raffleShuffle();
    firstDeck.displayDeck();
    
    return 0;
}
