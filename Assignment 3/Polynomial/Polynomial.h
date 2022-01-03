#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

#include <iostream>
using namespace std;

class Polynomial
{
    // private:
    double poly[10];
    int degree;

public:
    // default constructor
    Polynomial();

    // parameterized constructor (when the array of polynomial is already given)
    Polynomial(double[], int);

    // parameterized constructor (when user wants to input the exponents and cofitients and degree is given)
    Polynomial(int);

    // setters
    void setpoly(int);

    // getters
    void getpoly();

    // OPERATOR OVERLOADING

    // for addition (+)
    Polynomial operator+(Polynomial);

    // for subtraction (-)
    Polynomial operator-(Polynomial);

    // for addition assignment (+=)
    void operator+=(Polynomial);

    // for subtraction assignment (-=)
    void operator-=(Polynomial);

    // for assignment (=)
    void operator=(Polynomial);

    // for comparision (==)
    bool operator==(Polynomial);

    // for stream insertion (>>)
    friend void operator>>(istream &, Polynomial &);

    // for stream exertion (<<)
    friend void operator<<(ostream &, Polynomial &);
};
#endif