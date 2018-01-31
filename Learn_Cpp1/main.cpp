#include <iostream>
#include <string>
using namespace std;

class Person{
private:
    int age_;
    string name_;

public:
    void setAge(int age){
        age_ = age;
    }
    void setName(string name){
        name_ = name;
    }

    int getAge(){
        return age_;
    }

    string getName(){
        return name_;
    }
};


int main()
{
    Person person1;

    person1.setAge(22);
    person1.setName("gabriel");
    cout << "Person 1 age: " << person1.getAge() << endl;
    cout << "Person 1 Name: " << person1.getName() << endl;

    return 0;
}

