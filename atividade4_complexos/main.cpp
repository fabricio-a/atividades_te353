//Desenvolvido por Fabricio Alves Santana
//TE352 - Semana 4

#include <iostream>
#include "Complex.h"

using namespace std;

int main(int argc, char** argv) {
	float Re, Im;
	
	cout << "\nNumero A" << endl;
	cout << "Re: ";
	cin >> Re;
	cout << "\nIm: ";
	cin >> Im;
	Complex complexA(Re, Im);
	
	cout << "\nNumero B\n" << endl;
	cout << "Re: ";
	cin >> Re;
	cout << "\nIm: ";
	cin >> Im;
	Complex complexB(Re, Im);
	
	cout << "Numero Complexo A na forma retangular e polar:" << endl;
	complexA.print();
	cout << "Numero Complexo B na forma retangular e polar:" << endl;
	complexB.print();
	
	cout << "Numero Complexo A+B na forma retangular e polar:" << endl;	
	complexA.plus(complexB.getRe(), complexB.getIm());
	cout << "Numero Complexo A-B na forma retangular e polar:" << endl;	
	complexA.sub(complexB.getRe(), complexB.getIm());
	cout << "Numero Complexo AxB na forma retangular e polar:" << endl;	
	complexA.mult(complexB.getRe(), complexB.getIm());	
	cout << "Numero Complexo A/B na forma retangular e polar:" << endl;	
	complexA.div(complexB.getRe(), complexB.getIm());	
	return 0;
}
