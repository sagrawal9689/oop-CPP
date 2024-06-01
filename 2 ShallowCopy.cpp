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
};

int main()
{
    // create objects statically

    Student s1(15, 20);

    cout << s1.a << " " << *(s1.b);

    Student s2(s1); //         This copy contructor leads to shallow copy as only address is been copied in s2.b

    // both objects s1 and s2 have the same address in the variable b
    // this sahllow copy can be avoided by using a custom copy constructor

    s1.a = 100;
    *(s1.b) = 100;

    cout << s2.a << " " << *(s2.b);

    return 0;
}