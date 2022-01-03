#include "Complex.h"

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