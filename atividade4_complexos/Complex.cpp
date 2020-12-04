#include "Complex.h"

float Complex::getRe() {
	return Re;
}
float Complex::getIm() {
	return Im;
}

void Complex::print() {
	rect(Re, Im);
	pol(Re, Im);
};

void Complex::rect(float x, float y) {
	float real = x;
	float imag = y;
	cout << real << (Im >= 0 ? " + j" : " - j") << fabs(Im) << endl;
};

void Complex::pol(float x, float y) {
	float module = sqrt(pow(x,2)+pow(y,2));
	float phase = atan(y/x);
	
	cout << module << " |_" << phase << endl;
};

void Complex::plus(float x, float y) {
	float real = Re + x;
	float imag = Im + y;
	
	rect(real, imag);
	pol(real, imag);
};

void Complex::sub(float x, float y) {
	float real = Re - x;
	float imag = Im - y;
	
	rect(real, imag);
	pol(real, imag);
};

void Complex::mult(float x, float y) {
	float real = Re*x - Im*y;
	float imag = Re*y + Im*x;
	
	rect(real, imag);
	pol(real, imag);
};

void Complex::div(float x, float y) {
	float real = (Re*x - Im*y)/(x*x + y*y);
	float imag = (Re*y + Im*x)/(x*x + y*y);
	
	rect(real, imag);
	pol(real, imag);
};

Complex::Complex(float x, float y) {
	Re = x;
	Im = y;
};

Complex::~Complex() {
	cout << "" << endl;
};
