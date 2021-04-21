#include <stdlib.h>
#include <iostream>
#include "Headers/CPixel.h"
#include "Headers/CAlgorithmDDA.h"
#include "Headers/CAlgorithmBresenham.h"
#include "Headers/CMatrixMultiply.h"

using namespace std;

int main(int argc, char const *argv[])
{
    int option;
    bool band;
    band = true;
    while(band)
    {
        band = true;
        cout << "1.- DDA Algorithm" << endl;
        cout << "2.- Bresenham Algorithm" << endl;
        cout << "3.- Matrix Multiply" << endl;
        cout << "0.- Exit" << endl;
        cin >> option;
        system("clear");
        switch(option)
        {
            case 0:
                cout << "Good Bye Thanks" << endl;
                band = false;
            break;
            case 1:
                cout << "Digital Differential Analyzer Algorithm" << endl;
                CAlgorithmDDA::digitalDifferentialAnalyzer();
            break;
            case 2:
                cout << "Bresenham Algorithm" << endl;
                CAlgorithmBresenham::bresenham();
            break;
            case 3:
                cout << "Matrix Multiply" << endl;
                CMatrixMultiply::matrixMultiply();
            break;
        }
        if(band)
        {
            cout << endl;
            cout << endl;
        }
    }
    return 0;
}