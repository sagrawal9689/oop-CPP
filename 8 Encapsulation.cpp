#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    string name;

    Student(int roll, string name)
    {
        this->roll = roll;
        this->name = name;
    }
};

// Encapsulation is defined as wrapping up of data and information under a single unit
// We are able to achieve this by using calsses

int main()
{
    Student s1(1, "sahil");
    cout << s1.name << " ";
    return 0;
}