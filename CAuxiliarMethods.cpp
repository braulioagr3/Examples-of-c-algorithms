#include "Headers/CAuxiliarMethods.h"

CPixel* CAuxiliarMethods::readPixel()
{
    int x;
    int y;
    CPixel* pixel;
    cout << "\t" << "Please enter the x component:" << endl;
    cin >> x;
    cout << "\t" << "Please enter the y component:" << endl;
    cin >> y;
    cout << endl;
    pixel = new CPixel(x,y);
    return pixel;
}

float CAuxiliarMethods::setValuesLinear(int &dx, int &dy, CPixel* pi, CPixel* pe)
{
    float m;
    dx = pe->getX() - pi->getX();
    dy = pe->getY() - pi->getY();
    m = (float)dy/(float)dx; 
    return m;
}


void CAuxiliarMethods::setValues(float &m, int &dx, int &dy, CPixel* &pi, CPixel* &pe)
{
    cout << "Please enter the starting pixel" << endl;
    pi = CAuxiliarMethods::readPixel();
    cout << "Please enter the final pixel" << endl;
    pe = CAuxiliarMethods::readPixel();
    /*Start the bresenham Algorithm*/
    m = CAuxiliarMethods::setValuesLinear(dx,dy,pi,pe);
    cout << "dx = " + to_string(dx) << endl;
    cout << "dy = " + to_string(dy) << endl;
    cout << "m = " + to_string(m) << endl;
}