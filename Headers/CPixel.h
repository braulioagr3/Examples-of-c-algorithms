#ifndef CPixel_H
#define CPixel_H
using namespace std;
class CPixel
{
    //Instance Variables
    private:
        int x;
        int y;
    //Methods
    public:
        CPixel(int x, int y);
        int getX();
        int getY();
};
#endif