#include "student.h"
#include <iostream>
#include <string>
using namespace std;


void Student::setId(int id){
    id_ = id;
}

void Student::setName(string name){
    name_ = name;
}

int Student::getId(){
    return id_;
}

string Student::getName(){
    return name_;
}
