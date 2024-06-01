#include <bits/stdc++.h>
using namespace std;

class Student
{
    static int totalStudents; // declare static member   this memeber belong to the class and not  the objects
public:
    int age;
    int roll;

    Student()
    {
        totalStudents++; // constructor increasese the value of totstudents after every student creation.
    }

    static int getTotalStudents()
    {
        return totalStudents; //  Some constraitns  1) can only use static members and functions inside.
        //                                                 2) cannot use the this keyword
    }
};

int Student ::totalStudents = 0; // initialisation of static memebers can only be done outside the class

int main()
{
    Student s1, s2;

    cout << s1.getTotalStudents() << " ";

    // s2.totalStudents = 20; //   ideally this should not be done but this leads to change in static value

    cout << Student::getTotalStudents() << " ";
}