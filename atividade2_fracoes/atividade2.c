//Desenvolvido por Fabricio Alves Santana
//TE352 - Semana 2

#include <stdio.h>

typedef struct rationalNumb {
	int num;
	int den;
} rNumb;

rNumb rCreator();
rNumb rOp(rNumb x, rNumb y, char op);
rNumb rSimp(rNumb x);
float rToF(rNumb x);

int main() {
	printf("Numero Racional A\n");
	rNumb A = rCreator();
	printf("\nNumero Racional B\n");
	rNumb B = rCreator();
	
	rNumb ApB = rOp(A, B, 'p');
	rNumb AsB = rOp(A, B, 's');
	rNumb AmB = rOp(A, B, 'm');
	rNumb AdB = rOp(A, B, 'd');	
		
	printf("\nA = %d/%d = %d/%d = %f\n", A.num, A.den, rSimp(A).num, rSimp(A).den, rToF(A));
	printf("B = %d/%d = %d/%d = %f\n", B.num, B.den, rSimp(B).num, rSimp(B).den, rToF(B));
	printf("A + B = %d/%d = %d/%d = %f\n", ApB.num, ApB.den, rSimp(ApB).num, rSimp(ApB).den, rToF(ApB));
	printf("A - B = %d/%d = %d/%d = %f\n", AsB.num, AsB.den, rSimp(AsB).num, rSimp(AsB).den, rToF(AsB));
	printf("A * B = %d/%d = %d/%d = %f\n", AmB.num, AmB.den, rSimp(AmB).num, rSimp(AmB).den, rToF(AmB));
	printf("A / B = %d/%d = %d/%d = %f\n", AdB.num, AdB.den, rSimp(AdB).num, rSimp(AdB).den, rToF(AdB));
		
	return 0;
}

rNumb rCreator() {
	rNumb rational;
	printf("Numerador: ");
	scanf("%d", &rational.num);
	printf("Denominador: ");
	scanf("%d", &rational.den);
	
	return rational;
}

rNumb rOp(rNumb x, rNumb y, char op) {
	rNumb result;
	
	switch(op) {
		case 'p':
			result.num = x.num*y.den + y.num*x.den; 
			result.den = x.den*y.den;
			return result;
		case 's':
			result.num = x.num*y.den - y.num*x.den; 
			result.den = x.den*y.den;
			return result;
		case 'm':
			result.num = x.num*y.num;
			result.den = x.den*y.den;
			return result;
		case 'd':
			result.num = x.num*y.den;
			result.den = x.den*y.num;
			return result;
	}
}

rNumb rSimp(rNumb x) {
	int temp1 = x.num, temp2 = x.den;
	int resto = temp1 % temp2;
	
	do {
		resto = temp1 % temp2;
		temp1 = temp2;
		temp2 = resto;
	}
	while(resto);
	
	x.num = x.num / temp1;
	x.den = x.den / temp1;	
	
	return x;
}

float rToF(rNumb x) {
	float toF = (float)x.num/x.den;
	return toF;
}




