#include <bits/stdc++.h>

using namespace std;

class Student
{
    int age;

public:
    Student(int age)
    {
        this->age = age;
    }

    void getAge() const    //   const function declared
    {                      // inside const function we cannot modify a member function
        cout << this->age; // doing so will give an error

        // this->age=20;                             // this line will give error if uncommentd
    }

    void setAge(int age)
    {
        this->age = age;
    }
};

int main()
{

    const Student s1(15); //           Constant object declared We can only call constant fucntion belonging to the object

    // s1.setAge(15);                  // calling the setAge func which is not a const function will lead to an error
    s1.getAge();
    return 0;
}