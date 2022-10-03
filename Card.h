#include <cstdlib>
#include <stdlib.h>
#include <vector>
#include <iostream>
#include <string>

#ifndef RESPONSE_H
#define RESPONSE_H

using namespace std;

class Card
{
private:
    int value;
    string suit;

public:
    Card();

    int setValue();
    string setSuit();

    int getValue();
    string getSuit();

    Code::Code operator<<(); // NEED TO PUT PARAMETER VALUES

};

A card includes a value and a suit (club, diamond, heart or spade).
The class should at least include
        (1) a constructor,
(2) setValue() and setSuit() functions,
(3) getValue() and getSuit() functions,
(4) an overloaded << operator to print a card’s value and suit.