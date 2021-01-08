//Desenvolvido por Fabricio Alves Santana
//TE352 - Semana 7

#include <iostream>
#include "Classes.h"

using namespace std;

int main() {
	Caminhao caminhao;
	CarroPasseio carroPasseio;
	
	cout << "---- Caminhao -----" << endl;
	caminhao.getData();
	cout << endl;
	caminhao.putData();
	
	cout << "\n\n---- Carro de Passeio ----" << endl;
	carroPasseio.getData();
	cout << endl;
	carroPasseio.putData();
	
	return 0;
}
