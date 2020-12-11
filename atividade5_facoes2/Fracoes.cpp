#include "Fracoes.h"

Fracoes::Fracoes() {
	num = 0;
	den = 0;
}

Fracoes::Fracoes(int n, int d) {
	num = n;
	den = d;
}

int Fracoes::getNum() {
	return num;
}

int Fracoes::getDen() {
	return den;
}

void Fracoes::print() {
	cout << getNum() << "/" << getDen();
}

Fracoes Fracoes::operator++() { 
	num = num + den;
	
	return *this;
}

Fracoes Fracoes::operator--() {
	num = num - den;
	
	return *this;
}

Fracoes Fracoes::operator++(int) {
	Fracoes temp(num, den);
	
	num = num + den;
	
	return temp;
}

Fracoes Fracoes::operator--(int) {
	Fracoes temp(num, den);
	
	num = num - den;
	
	return temp;
	
}

Fracoes Fracoes::operator+(Fracoes parcela) {
	int numAux = num*parcela.getDen() + den*parcela.getNum();
	int denAux = den*parcela.getDen();
	
	return Fracoes(numAux, denAux);
}

Fracoes Fracoes::operator-(Fracoes subtraendo) {
	int numAux = num*subtraendo.getDen() - den*subtraendo.getNum();
	int denAux = den*subtraendo.getDen();
	
	return Fracoes(numAux, denAux);
}

Fracoes Fracoes::operator*(Fracoes fator) {
	int numAux = num*fator.getNum();
	int denAux = den*fator.getDen();
	
	return Fracoes(numAux, denAux);
}

Fracoes Fracoes::operator/(Fracoes divisor) {
	int numAux = num*divisor.getDen();
	int denAux = den*divisor.getNum();
	
	return Fracoes(numAux, denAux);
}

Fracoes Fracoes::simplify() {
	int temp1 = num, temp2 = den;
	int resto = temp1 % temp2;
	
	do {
		resto = temp1 % temp2;
		temp1 = temp2;
		temp2 = resto;
	}
	while(resto);
	
	temp2 = num / temp1;
	temp1 = den / temp1;	
	
	return Fracoes(temp2, temp1);
}


