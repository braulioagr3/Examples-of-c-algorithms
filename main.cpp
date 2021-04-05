#include <stdlib.h>
#include <iostream>
#include "Headers/CPixel.h"
#include "Headers/CAlgorithmDDA.h"

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