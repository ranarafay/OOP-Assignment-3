#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
using namespace std;

class Complex
{

    // private

    int real;
    int imag;

public:
    // default constructor
    Complex();

    // parameterized constructor
    Complex(int, int);

    // destructor
    ~Complex();

    // setters
    void set_real(int);
    void set_imag(int);

    // getters
    int get_real();
    int get_imag();

    // OPERATOR OVERLOADING

    // for addition (+)
    Complex operator+(Complex);

    // for subtraction (-)
    Complex operator-(Complex);

    // for multiplication (*)
    Complex operator*(Complex);

    // for devision (/)
    Complex operator/(Complex);

    // for add_assign (+=)
    void operator+=(Complex);

    // for sub_assign (-=)
    void operator-=(Complex);

    // for muul_assign (*=)
    void operator*=(Complex);

    // for dev_assign (/=)
    void operator/=(Complex);

    // for assignment (=)
    void operator=(Complex);

    // for comparision (==)
    bool operator==(Complex);

    // for comparision_not (!=)
    bool operator!=(Complex);

    // for greater comparision (>)
    bool operator>(Complex);
    
    // for lesses comparision (<)
    bool operator<(Complex);

    // for insertion operator(>>)
    friend void operator>>(istream &, Complex &);
    
    // for exertion operator(<<)
    friend void operator<<(ostream &, Complex &);
};
#endif