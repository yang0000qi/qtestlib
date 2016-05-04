#ifndef TEST2_H
#define TEST2_H

#include <iostream>
#include <stdlib.h>


using namespace std;

class Point2
{
public:
    void setPoint2(int x, int y) //实现setPoint函数
    {
        xPos = x;
        yPos = y;
    }

    void printPoint2()       //实现printPoint函数
    {
        cout<< "x = " << xPos << endl;
        cout<< "y = " << yPos << endl;
    }

private:
    int xPos;
    int yPos;
};

#endif // TEST2_H
