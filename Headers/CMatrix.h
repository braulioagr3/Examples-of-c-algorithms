#ifndef CMatrix_H
#define CMatrix_H
#include <vector>
#include <string.h>
#include <iostream>
#include "CAuxiliarMethods.h"
using namespace std;

class CMatrix
{
    private:
        int columns;
        int rows;
        float** values;
    public:
        CMatrix(int rows, int columns);
        int getColumns();
        int getRows();
        float** getVaues();
        void setValues();
        void printValues();
        CMatrix* multiply(CMatrix* m);
};
#endif