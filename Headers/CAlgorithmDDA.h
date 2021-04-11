#ifndef CAlgorithmDDA_H
#define CAlgorithmDDA_H
#include <vector>
#include <string.h>
#include <iostream>
#include "CPixel.h"
#include "CAuxiliarMethods.h"
#include <math.h>       /* ceil */
using namespace std;

class CAlgorithmDDA
{
    public:
    static void digitalDifferentialAnalyzer();
    static void setValues(float &m, int &dx, int &dy, CPixel* &pi, CPixel* &pe);
    static void case1(float m, int dx, int dy, CPixel* pi, CPixel* pe);
    static void case2(float m, int dx, int dy, CPixel* pi, CPixel* pe);
};
#endif