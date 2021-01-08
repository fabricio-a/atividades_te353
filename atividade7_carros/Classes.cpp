#include "Classes.h"

Motor::Motor() {
	numCilindro = 0;
	potencia = 0;
}

Motor::Motor(int n_C, int p) {
	numCilindro = n_C;
	potencia = p;
}

void Motor::getData() {
	cout << "Entre com o numero de cilindros: ";
	cin >> numCilindro;
	cout << "Entre com a potencia: ";
	cin >> potencia;
}

void Motor::putData() {
	cout << "Numero de Cilindros -> " << numCilindro << endl;
	cout << "Potencia -> " << potencia << endl;
}

Veiculo::Veiculo() {
	peso = 0;
	velocidadeMaxima = 0;
	preco = 0;
}

Veiculo::Veiculo(int pe, int vm, float pr) {
	peso = pe;
	velocidadeMaxima = vm;
	preco = pr;
}

void Veiculo::getData() {
	cout << "Entre com o peso do veiculo (em kg): ";
	cin >> peso;
	cout << "Entre com a velocidade maxima (em km/h): ";
	cin >> velocidadeMaxima;
	cout << "Entre com o preco do veiculo (em R$): ";
	cin >> preco;
}

void Veiculo::putData() {
	cout << "Peso do veiculo -> " << peso << "kg" << endl;
	cout << "Velocidade Maxima -> " << velocidadeMaxima << "km/h" << endl;
	cout << "Preco -> " << preco << "R$" << endl;
}

CarroPasseio::CarroPasseio() : Motor(), Veiculo() {
	cor += "initial";
	modelo += "initial";
}

CarroPasseio::CarroPasseio(int n_C, int p, int pe, int vm, float pr, char c[], char model[])
	: Motor(n_C, p), Veiculo(pe, vm, pr) {
		cor += c;
		modelo += model;
	}

void CarroPasseio::getData() {
	Motor::getData();
	Veiculo::getData();
	
	cout << "Entre com a cor do carro: ";
	cin >> cor;
	cout << "Entre com o modelo do carro: ";
	cin >> modelo;
}

void CarroPasseio::putData() {
	Motor::putData();
	Veiculo::putData();
	
	cout << "Cor do carro -> " << cor << endl;
	cout << "Modelo do carro -> " << modelo << endl;
}
	
Caminhao::Caminhao() : Motor(), Veiculo() {
	toneladas = 0;
	alturaMaxima = 0;
	comprimento = 0;
}

Caminhao::Caminhao(int n_C, int p, int pe, int vm, float pr, int t, int am, int c) 
	: Motor(n_C, p), Veiculo(pe, vm, pr) {
		toneladas = t;
		alturaMaxima = am;
		comprimento = c;
	}

void Caminhao::getData() {
	Motor::getData();
	Veiculo::getData();
	
	cout << "Entre com a carga maxima do caminhao (em Toneladas): ";
	cin >> toneladas;
	cout << "Entre com a altura maxima do caminhao (em m): ";
	cin >> alturaMaxima;
	cout << "Entre com o comprimento do caminhao (em m): ";
	cin >> comprimento;
}

void Caminhao::putData() {
	Motor::putData();
	Veiculo::putData();
	
 	cout << "Peso maximo do caminhao -> " << toneladas << " T" << endl;
	cout << "Altura maxima do caminhao -> " << alturaMaxima << "m" << endl;
	cout << "Comprimento do caminhao -> " << comprimento << "m" << endl;
}
 




