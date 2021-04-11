#include "Headers/CAlgorithmBresenham.h"

void CAlgorithmBresenham::bresenham()
{
    int x;
    int y;
    int dx;
    int dy;
    int dX;
    int dY;
    int dif;
    int p;
    float m;
    CPixel* pi;
    CPixel* pe;
    CAuxiliarMethods::setValues(m,dx,dy,pi,pe);
    dX = 2*dx;
    dY= 2*dy;
    dif = dY-dX;
    p = dY-dx;
    x = pi->getX();
    y = pi->getY();
    cout << "\t | k | p | x | y |" <<endl;
    for(int k = 0 ; k < dx ; k++)
    {
        if(p < 0)
        {
            x++;
            p += dY;
        }
        else
        {
            x++;
            y++;
            p += dif;
        }
        cout << "\t | "+ to_string(k) + " | " + to_string(p) + " | " + to_string(x) + " | " + to_string(y) + " |" <<endl;
    }
}