#include "line.h"
#include <iostream>
using namespace std;

int main()
{
    Line line1(50);
    Line line2(line1);

    line1.displayLengh();
    line2.displayLengh();

    return 0;
}
