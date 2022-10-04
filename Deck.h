#include <cstdlib>
#include <stdlib.h>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

class Deck {
private:
    node head*;     //number correct
    node tail*;   //number incorrect

public:
    Deck();
};

#endif DECK_H

//The deck object should contain a pointer to the first card in the deck.
//The class should at least include
//        (1) a constructor that creates a deck with all the cards in order
//        (ace-king, club-diamond-heart-spade),
//    (2) an overloaded << operator that prints the cards in the deck
//    (3) a shuffle() function that shuffles the cards in the deck
//        (Use any algorithm to shuffle the cards that puts the cards in a random order).


