// This file contains CardHand class definition

#ifndef CARDHAND_H
#define CARDHAND_H



#include "card.h"

class CardHand{
public:
    QList<Card> hand;
    CardHand();
    int getValue();
    QString toString();
    void append(Card c);
};

#endif // CARDHAND_H
