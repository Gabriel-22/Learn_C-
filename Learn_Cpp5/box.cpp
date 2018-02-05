#include "box.h"
#include <iostream>
using namespace std;

Box::Box()
{

}

Box::Box(int a, int b)
{
    data1 = a;
    data2 = b;
}

void Box::display()
{
    cout << "Data 1: " << data1 << "Data 2: " << data2 << endl;
}

void multiply (Box box)
{
    int data0;
    data0 = box.data1 * box.data2;
    cout << "Multiplication = " << data0;
}
