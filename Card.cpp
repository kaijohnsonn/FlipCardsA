#include <cstdlib>
#include <stdlib.h>
#include <vector>
#include <iostream>
#include <string>

#ifndef RESPONSE_H
#define RESPONSE_H

//Include Card class header file
#include "Card.h"

using namespace std;

Card::Card(int value, string suit)
{
    value = value;
    suit = suit;
}

int Card::setValue(const int& cardValue)
{
    value = cardValue;
}

string Card::setSuit(const string& cardSuit)
{
    suit = cardSuit;
}

int Card::getValue()
{
    return value;
}

string Card::getSuit()
{
    return suit;
}

Code::Code operator<<()
{
    ostr << Resp.getSuit() << ", " << Resp.getValue();
    retrun ostr;
}