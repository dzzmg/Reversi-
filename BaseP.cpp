#include "BaseP.h"

#include <iostream>

using namespace std;

char BaseP::print()
{
    if (this->getColor() == -1) // white
        return 'w';
    else
        return 'b';
}

Move BaseP::move(vector<vector<Board>> myBoard, int newX, int newY)
{

    if ((newX + newY) % 2 == 0)
    {
        return { NONE };
    }

    int x0 = this->getX();
    int y0 = this->getY();

    if (newX - x0 == (int)(this->getColor()) && abs(newY - y0) == 1)  // checks if the Move is normal
    {
        return { NORMAL };
    }
    else if (newX - x0 == (int)(this->getColor()) * 2 && abs(newY - y0) == 2) {
        int x1 = x0 + (newX - x0) / 2;
        int y1 = y0 + (newY - y0) / 2;
        if (myBoard[x1][y1].hasP() && myBoard[x1][y1].getP()->getColor() != this->getColor())
        {
            return { KILL, myBoard[x1][y1].getP() };
        }
    }

    return { NONE };
}
char BaseP::getType()
{
    return 'n';
}
