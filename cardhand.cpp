#include "cardhand.h"


CardHand::CardHand() {
    hand.reserve(5);
}

int CardHand::getValue() {
    int value = 0;
    for (Card c : hand) {
        value += c.getValue();
    }
    return value;
}
QString CardHand::toString() {
    QString output;
    for (Card c : hand) {
        output.append(c.toString() + "\t");
    }
    return output;
}

void CardHand::append(Card c) {
    hand.append(c);
}
