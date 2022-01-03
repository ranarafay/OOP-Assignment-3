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

// OUTLINE FUNCTIONS

// default constructor
Polynomial ::Polynomial()
{
    for (int i = 0; i < 10; i++)
    {
        poly[i] = 0;
    }

    degree = 0;
}

// parameterized constructor (when the array of polynomial is already given)
Polynomial ::Polynomial(double arr[], int deg)
{
    degree = deg;

    // calculating size of the array for storing exponents and coefficients
    int size = ((2 * deg) + 1);

    // making array of desired size
    poly[size];

    // assigning values of given array to data member
    for (int i = 0; i < size; i++)
    {
        poly[i] = arr[i];
    }
}

// parameterized constructor (when user wants to input the exponents and cofitients and degree is given)
Polynomial ::Polynomial(int deg)
{
    degree = deg;

    // calculating size of the array for storing exponents and coefficients
    int size = ((2 * deg) + 1);

    // making array of desired size
    poly[size];

    cout << "Enter the Coefficient and the Exponent of polynomial" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> poly[i];
    }
}

// setters
void Polynomial ::setpoly(int deg)
{
    degree = deg;

    // calculating size of the array for storing exponents and coefficients
    int size = ((2 * deg) + 1);

    // making array of desired size
    poly[size];

    cout << "Enter the Coefficient and the Exponent of polynomial" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> poly[i];
    }
}

// getters
void Polynomial ::getpoly()
{
    int deg = degree;

    // calculating size of the array for storing exponents and coefficients
    int size = ((2 * deg) + 1);

    cout << "The Polynomial is: " << endl;
    int ind = 0;
    while (ind < size - 2)
    {
        cout << poly[ind] << "^" << poly[ind + 1] << " + ";
        ind += 2;
    }
    cout << poly[size - 1] << endl;
}

// OPERATOR OVERLOADING

// for addition (+)
Polynomial Polynomial ::operator+(Polynomial obj)
{
    // temporary object
    Polynomial temp;

    // calculating size of the array for accessing exponents and coefficients
    int size = ((2 * degree) + 1);

    for (int i = 0; i < size; i++)
    {
        // for exponents
        if (i % 2 != 0)
        {
            temp.poly[i] = poly[i];
        }

        // for coefficients
        else
        {
            temp.poly[i] = poly[i] + obj.poly[i];
        }
    }

    temp.degree = obj.degree;
    return temp;
}

// for subtraction (-)
Polynomial Polynomial ::operator-(Polynomial obj)
{
    // temporary object
    Polynomial temp;

    // calculating size of the array for accessing exponents and coefficients
    int size = ((2 * degree) + 1);

    for (int i = 0; i < size; i++)
    {
        // for exponents
        if (i % 2 != 0)
        {
            temp.poly[i] = poly[i];
        }

        // for coefficients
        else
        {
            temp.poly[i] = poly[i] - obj.poly[i];
        }
    }

    temp.degree = obj.degree;
    return temp;
}

// for addition assignment (+=)
void Polynomial ::operator+=(Polynomial obj)
{

    // calculating size of the array for accessing exponents and coefficients
    int size = ((2 * degree) + 1);

    for (int i = 0; i < size; i++)
    {
        // for exponents
        if (i % 2 != 0)
        {
            poly[i] = obj.poly[i];
        }

        // for coefficients
        else
        {
            poly[i] = poly[i] + obj.poly[i];
        }
    }
}

// for subtraction assignment (-=)
void Polynomial ::operator-=(Polynomial obj)
{
    // calculating size of the array for accessing exponents and coefficients
    int size = ((2 * degree) + 1);

    for (int i = 0; i < size; i++)
    {
        // for exponents
        if (i % 2 != 0)
        {
            poly[i] = obj.poly[i];
        }

        // for coefficients
        else
        {
            poly[i] = poly[i] - obj.poly[i];
        }
    }
}

// for assignment (=)
void Polynomial ::operator=(Polynomial obj)
{
    // calculating size of the array for accessing exponents and coefficients
    int size = ((2 * degree) + 1);

    for (int i = 0; i < size; i++)
    {
        // assignment
        poly[i] = obj.poly[i];
    }
    obj.degree = degree;
}

// for comparision (==)
bool Polynomial ::operator==(Polynomial obj)
{
    // calculating size of the array for accessing exponents and coefficients
    int size = ((2 * degree) + 1);

    int cnt = 0;
    for (int i = 0; i < size; i++)
    {
        if (poly[i] == obj.poly[i])
        {
            cnt++;
        }

        else
        {
            continue;
        }
    }

    // for checking final result
    if (cnt == size)
    {
        return true;
    }

    else
    {
        return false;
    }
}

// for stream insertion (>>)
void operator>>(istream &in, Polynomial &obj)
{
    int deg;
    cout << "Enter the degree of Polynomial;" << endl;

    in >> deg;
    // calculating size of the array for accessing exponents and coefficients
    int size = ((2 * deg) + 1);

    cout << "Enter Exponent then Coefficient" << endl;
    for (int i = 0; i < size; i++)
    {
        in >> obj.poly[i];
    }

    obj.degree = deg; 
}

// for stream exertion (<<)
void operator<<(ostream &out, Polynomial &obj)
{
    // calculating size of the array for storing exponents and coefficients
    int size = ((2 * obj.degree) + 1);

    cout << "The Polynomial is: " << endl;
    int ind = 0;
    while (ind < size - 2)
    {
        out << obj.poly[ind] << "^" << obj.poly[ind + 1] << " + ";
        ind += 2;
    }
    out << obj.poly[size - 1] << endl;
}

int main()
{
    // defining arrays for polynomial
    double poly1[5] = {1, 2, 3, 1, 4};
    double poly2[5] = {3, 2, 6, 1, 8};
    double poly3[5] = {1, 2, 3, 1, 2};
    double poly4[5] = {5, 2, 7, 1, 9};

    // instantiating objects 
    Polynomial p1(poly1, 2);
    Polynomial p2(poly2, 2);
    Polynomial p3;
    Polynomial p4;
    Polynomial p5(poly3,2);
    Polynomial p6(poly4,2);
    Polynomial p7;

    // addition
    p3 = p1+p2;
    // subtraction
    p4 = p2-p1;


    cout << endl;
    cout << "Addition: " << endl;
    p3.getpoly();
    cout << "Subtraction: " << endl;
    p4.getpoly();

    // addition assignment
    p1 += p1;
    // subtraction assignment
    p6 -= p5;

    cout << "Addition assignment" << endl;
    p1.getpoly(); 
    cout << "Subtraction assignment" << endl;
    p6.getpoly();

    // assignment
    p7 = p6;

    cout << "Assignment" << endl;
    p7.getpoly();

    // comparision
    cout << "Comparision" << (p1 == p2) << endl;

    // exertion
    cout << p7;

    // insertion
    Polynomial p8;
    cin >> p8;
    return 0;
}
