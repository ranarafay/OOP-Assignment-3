#include "Complex.h"

// default constructor
Complex ::Complex()
{
    real = 0;
    imag = 0;
}

// parameterized constructor
Complex ::Complex(int r, int i)
{
    real = r;
    imag = i;
}

// destructor
Complex ::~Complex() {}

// setters
void Complex ::set_real(int r)
{
    real = r;
}

void Complex ::set_imag(int r)
{
    real = r;
}

// getters
int Complex ::get_real()
{
    return real;
}

int Complex ::get_imag()
{
    return imag;
}

// OPERATOR OVERLOADING

// for addition (+)
Complex Complex::operator+(Complex obj)
{
    // temporary object to return
    Complex temp;

    // adding real part
    temp.real = real + obj.real;

    // adding imaginary part
    temp.imag = imag + obj.imag;

    // returning object
    return temp;
}

// for subtraction (-)
Complex Complex::operator-(Complex obj)
{
    // temporary object to return
    Complex temp;

    // subtracting real part
    temp.real = real - obj.real;

    // subtracting imaginary part
    temp.imag = imag - obj.imag;

    // returning object
    return temp;
}

// for multiplication (*)
Complex Complex::operator*(Complex obj)
{
    // temporary object to return
    Complex temp;

    // multiplicating real part
    temp.real = ((real * obj.real) - (imag * obj.imag));

    // multiplicating imaginary part
    temp.imag = ((real * obj.imag) + (imag * obj.real));

    // returning object
    return temp;
}

// for devision (/)
Complex Complex::operator/(Complex obj)
{
    // temporary object to return
    Complex temp;

    // deviding real part
    temp.real = (((real * obj.real) + (imag * obj.imag)) / ((obj.real * obj.real) + (obj.imag * obj.imag)));

    // deviding imaginary part
    temp.imag = (((imag * obj.real) - (real * obj.imag)) / ((obj.real * obj.real) + (obj.imag * obj.imag)));

    // returning object
    return temp;
}

// for add_assign (+=)
void Complex ::operator+=(Complex obj)
{
    // for real part
    real = real + obj.real;

    // for imaginary part
    imag = imag + obj.imag;
}

// for sub_assign (-=)
void Complex ::operator-=(Complex obj)
{
    // for real part
    real = real - obj.real;

    // for imaginary part
    imag = imag - obj.imag;
}

// for mul_assign(*=)
void Complex ::operator*=(Complex obj)
{
    // assigning data members of objects
    int r = real;
    int i = imag;

    int ro = obj.real;
    int io = obj.imag;

    // for real part
    real = ((r * ro) - (i * io));

    // for imaginary part
    imag = ((r * io) + (i * ro));
}

// for dev_assign (/=)
void Complex ::operator/=(Complex obj)
{
    // assigning data members of objects
    int r = real;
    int i = imag;

    int ro = obj.real;
    int io = obj.imag;

    // for real part
    real = (((r * ro) + (i * io)) / ((ro * ro) + (io * io)));

    // for imaginary part
    imag = (((i * ro) - (r * io)) / ((ro * ro) + (io * io)));
}

// for assignment (=)
void Complex ::operator=(Complex obj)
{
    real = obj.real;
    imag = obj.imag;
}

// for comparision (==)
bool Complex ::operator==(Complex obj)
{
    if (real == obj.real && imag == obj.imag)
    {
        return true;
    }

    else
    {
        return false;
    }
}

// for comparision_not (!=)
bool Complex :: operator!=(Complex obj)
{
    if (real != obj.real && imag != obj.imag)
    {
        return true;
    }

    else
    {
        return false;
    }
}

// for greater comparision(>)
bool Complex :: operator>(Complex obj)
{
    if (real > obj.real && imag > obj.imag)
    {
        return true;
    }

    else
    {
        return false;
    }
}

// for lesses comparision(<)
bool Complex :: operator<(Complex obj)
{
    if (real < obj.real && imag < obj.imag)
    {
        return true;
    }

    else
    {
        return false;
    }
}


// for stream insertion (>>)
void operator>>(istream &in, Complex &obj)
{
    cout << "Enter Real part: " << endl;
    in >> obj.real;
    cout << "Enter Imaginary part: " << endl;
    in >> obj.imag;
}

// for stream exertion (<<)
void operator<<(ostream &out, Complex &obj)
{
    out << "Complex Number is: " << endl;
    out << obj.real;
    if (obj.imag >= 0)
    {
        out << "+" << obj.imag << "i";
    }

    else
    {
        out << obj.imag << "i";
    }
}
