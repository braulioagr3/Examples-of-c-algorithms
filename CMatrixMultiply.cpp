#include "Headers/CMatrixMultiply.h"

void CMatrixMultiply::matrixMultiply()
{
    int rows;
    int columns;
    CMatrix* m1;
    CMatrix* m2;
    cout << "Please set de martix 1" << endl;
    cout << "Rows: ";
    cin >> rows;
    cout << "Column: ";
    cin >> columns;
    m1 = new CMatrix(rows,columns);
    m1->setValues();
    system("clear");
    cout << "Please set de martix 2" << endl;
    cout << "Rows: ";
    cin >> rows;
    cout << "Column: ";
    cin >> columns;
    m2 = new CMatrix(rows,columns);
    m2->setValues();
    system("clear");
    m1->printValues();
    m2->printValues();

}