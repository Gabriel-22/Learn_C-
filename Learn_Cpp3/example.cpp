#include "example.h"
#include <iostream>
using namespace std;

Example::Example(){
    cout << "object is being created" << endl;
}

Example::Example(int n1, int n2){
    cout << "Object is being created, initialized with 0" << endl;
    cout << "number1 = " << n1 << endl;
    cout << "number2 = " << n2 << endl;
    number1 = n1;
    number2 = n2;
}

Example::~Example(){
    cout << "object is being deleted" << endl;
}

void Example::setNumber1(int n1){
    number1 = n1;
}

void Example::setNumber2(int n2){
    number2 = n2;
}

int Example::sum(){
    return number1 + number2;
}
