#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;


class Student
{
private:
    int id_;
    string name_;

public:

    void setId(int id);

    void setName(string name);

    int getId();

    string getName();

};

#endif // STUDENT_H
