#include "card.h"


Card::Card(int faceNbr, int suitNbr):
    FaceNbr(faceNbr), SuitNbr(suitNbr) {}

QString Card::toString() {
    QString output = Faces[FaceNbr] + "of" + Suits[SuitNbr];
    return output;
}

QString Card::getFace() {
    return Faces[FaceNbr];
}

QString Card::getSuit(){
    return Suits[SuitNbr];
}

int Card::getValue(){
    if (FaceNbr == 10) return 1;
    else if (FaceNbr == 11) return 2;
    else if (FaceNbr == 12) return 3;
    else if (FaceNbr == 0) return 4;
    else return 0;
}

int randRange(int min, int max) {
    return (min + rand() % (max - min + 1));
}
