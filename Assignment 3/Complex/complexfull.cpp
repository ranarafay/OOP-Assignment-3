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

// outline functions of class Complex

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


int main()
{

    Complex C1(1,2);
	Complex C2(3,6);
    Complex C3;
    Complex C4(1,2);
    Complex C5(3,6);
    Complex C6(1,2);
    Complex C7(3,6);


    C3 = C1 + C2;
    cout << "Addition" << endl;
    cout << C3;
    cout << endl;

    C3 = C2 - C1;
    cout << "Subtraction" << endl;
    cout << C3;
    cout << endl;
    
    C3 = C2 * C1;
    cout << "Multiplication" << endl;
    cout << C3;
    cout << endl;

    C3 = C2 / C1;
    cout << "Devision" << endl;
    cout << C3;
    cout << endl;

	C1+=C1;
    cout << "Addition Assignment" << endl;
    cout << C1;
    cout << endl;
	
    C2-=C1;
    cout << "Subtraction Assignment" << endl;
    cout << C2;
    cout << endl;
    
    C5*=C4;
    cout << "Multiplication Assignment" << endl;
    cout << C5;
    cout << endl;
    
    C7/=C6;
    cout << "Devision Assignment" << endl;
    cout << C7;
    cout << endl;

    C2 = C1;
    cout << "Assignment" << endl;
    cout << C2;
    cout << endl;

    cout << "Equal Comparision: " << (C2 == C1) << endl;

    cout << "Equal Comparision Not: " << (C2 != C1) << endl;

    Complex C10(1,2);
    Complex C11(4,6);

    cout << "Greater Comparision: " << (C10 > C11) << endl;
    
    cout << "Lesser Comparision: " << (C10 < C11) << endl;

    cout << "Exertion" << endl;
    cout << C7;
    cout << endl;

    cout << "Insertion" << endl;
    Complex C9;
    cin >> C9;
    return 0;
}