#include "Headers/CPixel.h"

CPixel::CPixel(int x, int y)
{
    this->x = x;
    this->y = y;
}

int CPixel::getX()
{
    return this->x;
}

int CPixel::getY()
{
    return this->y;
}

bool CPixel::operator==(CPixel* p)
{
    return (this->x==p->x) && (this->y == p->y);
}