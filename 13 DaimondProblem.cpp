#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    int id;
    void print()
    {
        cout << "Inside Vehicle\n";
    }

    A()
    {
        cout << "A const called\n";
    }

    ~A()
    {
        cout << "A dest called\n";
    }
};

class B : virtual public A
{
public:
    B()
    {
        cout << "B const called\n";
    }

    ~B()
    {
        cout << "B dest called\n";
    }
};

class C : virtual public A
{
public:
    C()
    {
        cout << "C const called\n";
    }

    ~C()
    {
        cout << "C dest called\n";
    }
};

class D : public B, public C
{
public:
    D()
    {
        cout << "D const called\n";
    }

    ~D()
    {
        cout << "D dest called\n";
    }
};

int main()
{

    D d1;

    //  d1.print();   A has print function and it will be copied in B as well as C therefore it is ambigious and
    //  compiler becomes confused as to which print funct to call

    //  This confusion can be solved by using scope operator eg d1.B:: print();
    //  But still two copies of A are made one in B and other in C
    //  This can be solved by inheriting A as virtual

    d1.print();

    return 0;
}

//          A
//      |       |
//      V       V
//      B       C
//          |
//          V
//          D