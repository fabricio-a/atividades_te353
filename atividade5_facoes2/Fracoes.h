#include <iostream>

using namespace std;

class Fracoes {
	private: 
		int num, den;
	
	public:
		Fracoes();
		Fracoes(int, int);
		int getNum();
		int getDen();
		void print();
		Fracoes operator++();
		Fracoes operator--();
		Fracoes operator++(int);
		Fracoes operator--(int);
		Fracoes operator+(Fracoes parcela);
		Fracoes operator-(Fracoes subtraendo);
		Fracoes operator*(Fracoes fator);
		Fracoes operator/(Fracoes divisor);
		Fracoes simplify();
};
