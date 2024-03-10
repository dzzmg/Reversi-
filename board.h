#pragma once
#include "piece.h"

class Pawn;



class Board {
private:
    Piece* pawn = nullptr;
public:
    Board();

    /** Sets the given pawn */
    void setP(Piece* pawn);

    /** Gets the pawn */
    Piece* const getP() const;

    /** Checks if there is a pawn on the field */
    bool hasP();

};

