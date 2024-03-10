#include "board.h"


void Board::setP(Piece* pawn)
{
    Board::pawn = pawn;
}

Board::Board()
{
    this->pawn = nullptr;
}
Piece* const Board::getP() const {
    return pawn;
}

bool Board::hasP() {
    return this->pawn != nullptr;
}
