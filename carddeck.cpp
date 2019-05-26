#include "carddeck.h"

CardHand CardDeck::deal(int handSize) {
    CardHand newHand;
    for (int i = 0; i < handSize; i++) {
        newHand.append(deck.takeAt(rand() % 52));
    }
    return newHand;
}

QString CardDeck::toString() {
    QString output;
    for (Card c : deck) {
        output.append(c.toString() + "\n");
    }
    return output;
}
int CardDeck::getCardsLeft(){
    return deck.length();
}
void CardDeck::restoreDeck(){
    deck.clear();
    int k = 0;
    for (int i = 0; i < 52; i++) {
        deck[i] = Card(i%13, i/13);
    }
}

void CardDeck::shuffle() {

}
