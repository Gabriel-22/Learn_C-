#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;


class Student
{
private: // Member variables are private.
    int id_;
    string name_;

public: // Member functions are public.

    // Setter functions.

    void setId(int id);
    void setName(string name);

    // Getter functions.

    int getId();
    string getName();

};

#endif // STUDENT_H
