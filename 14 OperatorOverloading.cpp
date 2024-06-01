#include <bits/stdc++.h>
using namespace std;

class Fraction
{

    int numerator, denominator;

public:
    Fraction(int num, int den)
    {
        numerator = num;
        denominator = den;
    }

    void show()
    {
        cout << numerator << "/" << denominator << "\n";
    }

    Fraction operator+(Fraction &f2)
    {
        int dem = denominator * f2.denominator;
        int num = numerator * f2.denominator + f2.numerator * denominator;

        Fraction ans(num, dem);
        return ans;
    }
};

int main()
{

    Fraction f1(2, 5), f2(5, 6);

    f1.show();

    f2.show();

    Fraction ans = f1 + f2;

    ans.show();

    return 0;
}