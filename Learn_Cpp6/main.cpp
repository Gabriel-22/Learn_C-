#include <iostream>
using namespace std;

int main()
{
    int value1 = 2;
    double value2 = 5.3;

    cout << "Value of value1 variable: " << value1 << endl;
    cout << "Value of value2 variable: " << value2 << endl;
    // Values of value1 and value2 variables.

    cout << "\nAdress of value1 variable: " << &value1 << endl;
    cout << "Adress of value2 variable: " << &value2 << endl;
    // & operator will return the memory adress of the variables.

    int *v1Ptr;
    double *v2Ptr;
    // Declare pointers, variables that contain a memory adress.

    v1Ptr = &value1;
    v2Ptr = &value2;
    // The pointers receive the adress of value1 and value2 variables.

    cout << "\nAdress stored in v1Ptr variable: " << v1Ptr << endl;
    cout << "Adress stored in v2Ptr variable: " << v2Ptr << endl;
    // The pointers v1ptr and v2ptr will return the memory adress.

    cout << "\nValue stored in *v1Ptr variable: " << *v1Ptr << endl;
    cout << "Value stored in *v2Ptr variable: " << *v2Ptr << endl;
    // *v1ptr and *v2ptr will return the value stored in the memory adress.

    return 0;
}

