#include <iostream>
#include "Fracoes.h"

using namespace std;

int main() {
	int num, den;
	
	cout << "Entre com o primeiro numero fracionario A:" << endl;
	cout << "Numerador: ";
	cin >> num;
	cout << "\nDenominador: ";
	cin >> den;
	Fracoes A(num, den);
	
	cout << "\n\nEntre com o primeiro numero fracionario A:" << endl;
	cout << "Numerador: ";
	cin >> num;
	cout << "\nDenominador: ";
	cin >> den;
	Fracoes B(num, den);
	
	cout << "\nA++ = "; (A++).print(); cout << endl;
	cout << "A-- = "; (A--).print(); cout << endl;
	cout << "++A = "; (++A).print(); cout << endl;
	cout << "--A = "; (--A).print(); cout << endl;
	
	cout << "B++ = "; (B++).print(); cout << endl;
	cout << "B-- = "; (B--).print(); cout << endl;
	cout << "++B = "; (++B).print(); cout << endl;
	cout << "--B = "; (--B).print(); cout << endl;
	
	cout << "\nA+B= "; (A + B).print(); cout << " = " ;(A + B).simplify().print(); cout << endl;
	cout << "A-B= "; (A - B).print(); cout << " = " ;(A - B).simplify().print(); cout << endl;
	cout << "A*B= "; (A * B).print(); cout << " = " ;(A * B).simplify().print(); cout << endl;
	cout << "A/B= "; (A / B).print(); cout << " = " ;(A / B).simplify().print(); cout << endl;
	
	return 0;
}
