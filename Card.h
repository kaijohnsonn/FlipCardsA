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
    string value;
    string suit;

public:
    Card(int value, string suit);

    string setValue(const int& cardValue);
    string setSuit(const string& cardSuit);

    string getValue();
    string getSuit();

    friend ostream& operator<<(ostream& ostr, const Card& Resp);

};
#endif CARD_H