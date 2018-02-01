#include "example.h"
#include <iostream>
using namespace std;

int main()
{
    Example op1(0,0);

    op1.setNumber1(3);
    op1.setNumber2(7);

    cout << "number1 and number2 set" << endl;

    cout << "Operation 1: number1+ number2 = " << op1.sum() << endl;

    Example op2(0,0);

    op2.setNumber2(1);
    op2.setNumber2(5);

    cout << "number1 and number2 set" << endl;

    cout << "Operation 2: number1+ number2 = " << op2.sum() << endl;

    return 0;
}

