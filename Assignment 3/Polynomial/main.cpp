#include "Polynomial.h"


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
