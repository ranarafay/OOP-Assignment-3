#include "Polynomial.h"

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
