#include "line.h"
#include <iostream>
using namespace std;

Line::Line()
{

}

Line::Line(int len)
{
    length = len;
}

Line::Line(Line &obj)
{
    length = obj.length;
    cout << "Copy constructor run successfully" << endl;
}

void Line::displayLengh()
{
    cout << "Length = " << length << endl;
}
