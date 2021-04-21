#include "Headers/CMatrix.h"

CMatrix::CMatrix(int rows, int columns)
{
    this->rows = rows;
    this->columns =  columns;
    values = new float*[rows];
    for (int i = 0 ; i <  this->rows ; i++)
    {
        values[i] = new float[this->columns];
    }
}

void CMatrix::setValues()
{
    cout << "Pleasse insert the values" << endl;
    cout << "size of matrix [" + to_string(this->rows) + "," + to_string(this->columns) + "]" << endl;
    for(int i = 0 ; i <  this->rows ; i++)
    {
        for(int j = 0 ; j <  this->columns ; j++)
        {
            cout << "[" + to_string(i) + "," + to_string(j) + "]" << endl;
            cin >> this->values[i][j];
        }
    }
}

void CMatrix::printValues()
{
    cout << "size of matrix [" + to_string(this->rows) + "," + to_string(this->columns) + "]" << endl;
    for(int i = 0 ; i <  this->rows ; i++)
    {
        cout << "[";
        for(int j = 0 ; j <  this->columns ; j++)
        {
            cout << to_string(this->values[i][j]) + "|";
        }
        cout << "]" <<endl;
    }
}

float** CMatrix::getVaues()
{
    return this->values;
}

int CMatrix::getColumns()
{
    return this->columns;
}
int CMatrix::getRows()
{
    return this->rows;
}