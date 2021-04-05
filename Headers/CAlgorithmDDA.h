#ifndef CAlgorithmDDA_H
#define CAlgorithmDDA_H
#include <vector>
#include <string.h>
#include <iostream>
#include "CPixel.h"
using namespace std;

class CAlgorithmDDA
{
    public:
    static void digitalDifferentialAnalyzer();
    static void setValues(float &m, int &dx, int &dy, CPixel* &pi, CPixel* &pe);
};
#endif