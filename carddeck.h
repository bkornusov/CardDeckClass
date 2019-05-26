// This file contains CardDeck class definition

#ifndef CARDDECK_H
#define CARDDECK_H

#include "card.h"
#include "cardhand.h"

class CardDeck {
public:
    QList<Card> deck;
    CardDeck() {
        srand(time_t(nullptr));
        for (int i = 0; i < 52; i++) {
            deck[i] = Card(i%13, i/13);
        }
    }
    CardHand deal(int handSize);
    QString toString();
    int getCardsLeft();
    void restoreDeck();
    void shuffle();
};

#endif // CARDDECK_H
