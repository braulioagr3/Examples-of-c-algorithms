#include "Headers/CAlgorithmDDA.h"
#include "Headers/CAuxiliarMethods.h"

void CAlgorithmDDA::digitalDifferentialAnalyzer()
{
    int dx;
    int dy;
    float m;
    CPixel* pi;
    CPixel* pe;
    CAlgorithmDDA::setValues(m,dx,dy,pi,pe);
    if(0 < m && m < 1)
    {
        cout << "Case 1: (0 < m < 1)" << endl;
    }
    else if(m > 1)
    {
        cout << "Case 2: (m > 1)" << endl;
    }
}

void CAlgorithmDDA::setValues(float &m, int &dx, int &dy, CPixel* &pi, CPixel* &pe)
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