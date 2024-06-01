#include <iostream>

using namespace std;

class Student
{
public:
    int id;
    string name;

    // PArametirised constructor after this constructor is declared
    // we can no longer use the default constructor

    Student(int id, string name)
    {
        this->id = id;
        this->name = name;
        cout << "param const called";
    }

    // destrctor
    ~Student()
    {
        cout << "destructor called";
    }
};

int main()
{
    // create objects statically

    Student s1(15, "sahil");
    Student s2(11, "sa");
    Student s3(10, "sah");

    // Student s2;         this would give error because there is no default constructor available.

    // create objects dynamically

    Student *s4 = new Student(25, "SahilA");

    // destructor wont be called for dynamically deaclared student s4 because it wont be deletd

    // we need to delete it on our own only then the destructor will be callled

    delete s4;

    return 0;
}