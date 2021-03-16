#include <iostream>
#include "Fraction.h"
#include "Fraction.cpp"
using namespace std;

int main()
{
    Fraction f1, f2;
    f1.setNumerator(72);
    f1.setDenominator(48);
    f1.getDouble();
    f1.outputReducedFraction();

    f2.setNumerator(20);
    f2.setDenominator(60);
    f2.getDouble();
    f2.outputReducedFraction();
    return 0;
}