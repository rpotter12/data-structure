/*define a class Fraction whose objects represent rational numbers.include integer data members num and den for storing
the numerator and denominator respectively.write the following functions for function:
1. paramiterized constructors with one and two arguments.
2. copy constructor
3. a function, eval-fract()for evaluating the value of the rational number
4. a function,invert() for inverting the given rational number.*/


#include<iostream>
using namespace std;
class Fraction
{
    public:
    int num,den;
    Fraction(int a,int b)
    {
        num=a;
        den=b;
    }
    Fraction(const Fraction &p2)
    {
        num= p2.num;
        den= p2.den;
    }
    int eval-fract()
    {
        return num/den;
    }
    int invert()
    {
        return den/num;
    }
}
