#include "Fraction.h"
#include <iomanip>
void Fraction::setNumerator(int nu)
{
    this->numerator = nu;
}

void Fraction::setDenominator(int de)
{
    this->denominator = de;
}

void Fraction::getDouble()
{
    if (numerator % denominator == 0)
    {
        cout << numerator / denominator << endl;
    }
    else
    {
        cout << fixed << setprecision(6) << static_cast<double>(numerator) / static_cast<double>(denominator) << endl;
    }
}

void Fraction::outputReducedFraction()
{
    int r = numerator % denominator;
    int gcd = denominator;
    while (r != 0)
    {
        int rnew = gcd % r;
        gcd = r;
        r = rnew;
    }
    if (denominator / gcd == 1)
    {
        cout << numerator / gcd << endl;
    }
    else
    {
        cout << numerator / gcd << "/" << denominator / gcd << endl;
    }
}
