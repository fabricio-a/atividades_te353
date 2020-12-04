#include <iostream>
#include <math.h>

using namespace std;

class Complex {
	public:
		~Complex();
		Complex(float x, float y);
		float getRe();
		float getIm();
		void print();
		void rect(float x, float y);
		void pol(float x, float y);
		void plus(float x, float y);
		void sub(float x, float y);
		void mult(float x, float y);
		void div(float x, float y);
	private:
		float Re, Im, Mod, Ph;
};
