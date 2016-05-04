#include <iostream>
#include "test1.h"

void Point::setPoint(int x, int y) //通过作用域操作符 '::' 实现setPoint函数
{
    xPos = x;
    yPos = y;
}

void Point::printPoint()       //实现printPoint函数
{
    cout<< "x = " << xPos << endl;
    cout<< "y = " << yPos << endl;
}
