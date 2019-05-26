// Batyr Kornusov Homework assignment 5
// Card class from section 6.8.1
// This file contains Card class definition

#ifndef CARD_H
#define CARD_H

#include <QStringList>
#include <QString>
#include <QTextStream>

static QStringList Faces = {"A","2","3","4","5","6","7","8","9","T","J","Q","K"};
static QStringList Suits = {"Spades", "Hearts", "Diamonds","Clubs"};

class Card {
public:
    int FaceNbr;
    int SuitNbr;
    Card(int faceNbr, int suitNbr);
    QString toString();
    QString getFace();
    QString getSuit();
    int getValue();
    int randRange(int min, int max);
};

#endif // CARD_H
