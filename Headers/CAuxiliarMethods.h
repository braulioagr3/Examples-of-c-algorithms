#ifndef CAuxiliarMethods_H
#define CAuxiliarMethods_H
#include <vector>
#include <iostream>
#include "CPixel.h"
using namespace std;

class CAuxiliarMethods
{
    public:
        static CPixel* readPixel();
        static float setValuesLinear(int &dx, int &dy, CPixel* pi, CPixel* pe);
        static void setValues(float &m, int &dx, int &dy, CPixel* &pi, CPixel* &pe);
};
#endif