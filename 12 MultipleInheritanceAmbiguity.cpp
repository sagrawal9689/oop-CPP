#include <bits/stdc++.h>
using namespace std;

class Vehicle
{
public:
    int id;
    void print()
    {
        cout << "Inside Vehicle\n";
    }

    Vehicle()
    {
        cout << "vehicle const called\n";
    }

    ~Vehicle()
    {
        cout << "vehical dest called\n";
    }
};

class Car
{
public:
    void print()
    {
        cout << "Inside Car\n";
    }

    Car()
    {
        cout << "car const called\n";
    }

    ~Car()
    {
        cout << "Car dest called\n";
    }
};

class Bike : public Vehicle, public Car
{
public:
    // void print()
    // {
    //     cout<<"Inside Bike\n";
    // }

    Bike()
    {
        cout << "bike const called\n";
    }

    ~Bike()
    {
        cout << "Bike dest called\n";
    }
};

int main()
{
    Bike b1;

    // b1.print();  since both Vehicle and Car has print function therefore this cause ambiguity error

    // this ambiguity can be solved by declaring a print func in Bike class itself or
    // using the soln given below

    b1.Vehicle::print();

    //  b1.[classname]::[function name]

    return 0;
}

//       Vehicle          Car                       Multiple Inheritance
//                  |
//                  V
//
//                 Bike
