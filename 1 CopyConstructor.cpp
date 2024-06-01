#include <iostream>

using namespace std;

class Student
{
public:
    int id;
    string name;

    Student(int id, string name)
    {
        this->id = id;
        this->name = name;
        cout << "param const called";
    }
};

int main()
{
    // create objects statically

    Student s1(15, "sahil");
    Student s2(11, "sa");

    Student s3(s1); // copy constructor called

    s2 = s1; // copy assignment oprerator

    Student s4 = s2; // copy constructor called

    return 0;
}