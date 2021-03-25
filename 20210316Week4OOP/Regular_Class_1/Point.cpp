#include "Point.h"

void Point::Set(int vertical, int horizontal)
{
    this->vertical = vertical, this->horizontal = horizontal; //Set Point
}

void Point::Move(int x, int y)
{
    vertical += x, horizontal += y;
}
void Point::Rotate()
{
    int temp = vertical;
    vertical = horizontal;
    horizontal = -temp;
}
