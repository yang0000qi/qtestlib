#ifndef TEST1_H
#define TEST1_H

#include <iostream>

using namespace std;

class Point
{
public:
    void setPoint(int x, int y); //在类内对成员函数进行声明
    void printPoint();

private:
    int xPos;
    int yPos;
};


#endif // TEST1_H
