#include <bits/stdc++.h>
using namespace std;

// initialisation list should contain the constant and refrence as thy need to be initinalised at time of creation

class Student
{
public:
    int age;
    const int roll;
    int &a;

    Student(int r) : roll(r) //   <--------- This is initialisation list here we can initialise
    {                        //   varialble at the time of their creation

        cout << r << " "; // we cannot initialise inside contructor because the roll value already gets filed with a
    }                     // garbage value before entering the constructor and it is const so it must be initialised at
};                        // at creation and hence we get error

int main()
{
    Student s1(10);
}

//   const int x= 15;      This is right

//  const int x;    <---will give error at this line
//         x= 15;       This is wrong as const variable needs to be initialised at the time of creation

// int y=10;

// int& x= y;     This is right

// int& x;      error
//    x= y;     This is wrong as reference variable needs to be initialised at the time of creation
