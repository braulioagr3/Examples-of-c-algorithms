#include "Headers/CMatrixMultiply.h"

void CMatrixMultiply::matrixMultiply()
{
    int rows;
    int columns;
    CMatrix* m1;
    CMatrix* m2;
    CMatrix* ans;
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
    cout << "matrix 1:" << endl;
    m1->printValues();
    cout << "matrix 2:" << endl;
    m2->printValues();
    cout << "ans:" << endl;
    ans= m1->multiply(m2);
    ans->printValues();
}