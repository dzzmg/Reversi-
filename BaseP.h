#pragma once

#include "Move.h"
#include"piece.h"
#include <vector>

using namespace std;

/** Derived class, publicly inheriting from the Pawn class. Objects of this class are the basic pawns in the game. */

class BaseP : public Piece
{
public:
	using Piece::Piece;
	/** Destructor */
	~BaseP() {}

	/** Prints out the color of specific pawn*/
	char print() override;

	/** Checks which type of movement will be executed */
	Move move(vector<vector<Board>> array, int newX, int newY) override;

	/** Gets the type of pawn (in this case - 'n') */
	char getType() override;
};


