#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
    int roll; // here roll is abstracted from user by using private access specifier

public:
    string name;

    Student(int roll, string name)
    {
        this->roll = roll;
        this->name = name;
    }
};

// Abstraction is the concept of object-oriented programming that “shows” only essential attributes and “hides” unnecessary information.

int main()
{
    Student s1(1, "sahil");
    cout << s1.name << " ";
    return 0;
}