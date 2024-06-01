#include <iostream>

using namespace std;

class Student
{
public:
    int a;
    int *b;

    Student(int a, int b)
    {
        this->a = a;
        this->b = new int;
        *(this->b) = b;
    }

    Student(Student &s)
    {
        this->a = s.a;
        this->b = new int;
        *(this->b) = *(s.b);
    }
};

int main()
{
    // create objects statically

    Student s1(15, 20);

    cout << s1.a << " " << *(s1.b);

    Student s2(s1); //   we have created a custom copy constructor which allocates dynamic menory and allocates the b variable
                    // this in known as deep copy

    s1.a = 100;
    *(s1.b) = 100;

    cout << s2.a << " " << *(s2.b);

    return 0;
}