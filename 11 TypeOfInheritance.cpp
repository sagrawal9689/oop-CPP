#include <bits/stdc++.h>
using namespace std;

class Vehicle
{
private:
    int x;

protected:
    int y;

public:
    int id;
    string name;

    // Vehicle(int id, string name)
    // {
    //     this->id = id;
    //     this->name = name;
    // }
    Vehicle(int x)
    {
        this->x = x;
        cout << "vehicle paramiterised const called\n";
    }

    ~Vehicle()
    {
        cout << "vehical dest called\n";
    }
};

class Car : public Vehicle
{
public:
    Car(int x) : Vehicle(x) // Vehicle class has only a parameterised const so it must be called here
    {
        cout << "car param const called\n";
    }
    // public -> public
    // protected -> protected
    // private -> not accessible

    ~Car()
    {
        cout << "Car dest called\n";
    }
};

class Bike : protected Vehicle
{
    // public -> protected
    // protected -> protected
    // private -> not accessible
};

class Ship : private Vehicle
{
    // public -> private
    // protected -> private
    // private -> not accessible
};

int main()
{
    Car c1(5);
    return 0;
}

//                  A
//     |            |          |                 Hierarchical inheritance
//     V            V          V
//
//     B            C          D

//            A          B                       Multiple Inheritance
//                 |
//                 V
//
//                 C

//    A

//    |
//    V                               Multi level Inhertance

//    B

//    |
//    V

//    C