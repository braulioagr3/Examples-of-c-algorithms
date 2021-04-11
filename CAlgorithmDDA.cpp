#include "Headers/CAlgorithmDDA.h"

void CAlgorithmDDA::digitalDifferentialAnalyzer()
{
    int dx;
    int dy;
    float m;
    CPixel* pi;
    CPixel* pe;
    CAuxiliarMethods::setValues(m,dx,dy,pi,pe);
    if(0 <= m && m <= 1)
    {
        cout << "Case 1: (0 < m < 1)" << endl;
        CAlgorithmDDA::case1(m,dx,dy,pi,pe);
    }
    else if(m > 1)
    {
        cout << "Case 2: (m > 1)" << endl;
        CAlgorithmDDA::case2(m,dx,dy,pi,pe);
    }
}

void CAlgorithmDDA::case1(float m, int dx, int dy, CPixel* pi, CPixel* pe)
{
    int n;
    int x;
    float y;
    CPixel* pixel;
    vector<CPixel*> pixels;
    n = max(dx,dy);
    cout << "\t |i|X|Y|Round(Y)" <<endl;
    cout << "\t |0|" + to_string(pi->getX()) + "|" +  to_string(pi->getY()) +  "|" + to_string(pi->getY()) << endl;
    x = pi->getX();
    y = (float)pi->getY();
    pixels.push_back(pi);
    for(int i = 0; i < n ; i++)
    {
        x ++;
        y += m;
        cout << "\t |" + to_string(i+1) + "|" + to_string(x) + "|" + to_string(y) + "|" + to_string(int(floor((double)y)))<< endl;
        pixel = new CPixel(x,int(floor((double)y)));
        pixels.push_back(pixel);
    }
}

void CAlgorithmDDA::case2(float m, int dx, int dy, CPixel* pi, CPixel* pe)
{
    int n;
    int x;
    float y;
    n = max(dx,dy);
    cout << "\t |i|X|Y|Round(Y)" <<endl;
    cout << "\t |0|" + to_string(pi->getX()) + "|" +  to_string(pi->getY()) +  "|" + to_string(pi->getY()) << endl;
    x = pi->getX();
    y = (float)pi->getY();
    for(int i = 0; i < n ; i++)
    {
        x += 1/m;
        y ++;
        cout << "\t |" + to_string(i+1) + "|" + to_string(x) + "|" + to_string(y) + "|" + to_string(int(floor((double)y)))<< endl;
    }
    cout << "\t |0|" + to_string(pe->getX()) + "|" +  to_string(pe->getY()) +  "|" + to_string(pe->getY()) << endl;

}
