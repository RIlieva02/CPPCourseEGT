//
//  DeckOfCards.cpp
//  ShuffleCards_homework
//
//  Created by Ralitsa Toneva on 15.02.24.
//

#include "DeckOfCards.hpp"

DeckOfCards::DeckOfCards(){
    std::vector<std::string> types = {"A", "K", "D", "J", "10", "9", "8", "7", "6", "5", "4", "3", "2"};
    std::vector<std::string> suits = {"Clubs", "Diamonds", "Hearts", "Spades"};
            
//    for (const auto& suit : suits) {
//        for (const auto& type : types) {
//            deck.push_back(PlayingCards(type, suit));
//        }
//    }
    for (const auto& suit : suits) {
           for (const auto& type : types) {
               // Създаване на карта и добавяне към вектора
            PlayingCards newCard = {type, suit};
            deck.push_back(newCard);
           }
       }
}

void DeckOfCards::raffleShuffle(){
    for (int i = 0; i < 3; i++){ // ще ги разбъркаме 3 пъти
        std::vector<PlayingCards> firstHalf(deck.begin(), deck.begin() + deck.size() / 2);
        std::vector<PlayingCards> secondHalf(deck.begin() + deck.size() / 2, deck.end());
        int count = 0;
        for (int i = 0; i < firstHalf.size(); i++){
            deck.at(count) = firstHalf.at(i);
            count++;
            deck.at(count) = secondHalf.at(i);
            count++;
        }
    }
}

void DeckOfCards::displayDeck(){
    for (int i = 0; i < deck.size(); i++){
        deck.at(i).print();
        
    }
}


