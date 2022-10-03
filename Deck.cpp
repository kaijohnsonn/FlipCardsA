#include <cstdlib>
#include <stdlib.h>
#include <vector>
#include <iostream>
#include <string>

//Include Card class header file
#include "Deck.h"
#include "Card.h"

using namespace std;

Deck::Deck()
{
    head = NULL;
    tail = NULL;
    count = 0;
}


Fully implement a deck class that stores the cards in a deck in order.
A deck of cards should be implemented using a linked list of nodes,
each of which contains a single card.

The deck object should contain a pointer to the first card in the deck.
The class should at least include
        (1) a constructor that creates a deck with all the cards in order
            (ace-king, club-diamond-heart-spade),
        (2) an overloaded << operator that prints the cards in the deck
        (3) a shuffle() function that shuffles the cards in the deck
            (Use any algorithm to shuffle the cards that puts the cards in a random order).

