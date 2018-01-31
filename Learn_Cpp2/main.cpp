#include "student.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    Student student1;

    student1.setId(12345);
    student1.setName("Gabriel");

    cout << "Student 1 id: " << student1.getId() << endl;
    cout << "Student 1 name: " << student1.getName() << endl;

    return 0;
}

