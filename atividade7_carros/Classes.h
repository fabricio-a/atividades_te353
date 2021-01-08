#include <iostream>
#include <string.h>

using namespace std;

class Motor {
	private:
		int numCilindro;
		int potencia;
		
	public:
		Motor();
		Motor(int, int);
		void getData();
		void putData();
};

class Veiculo {
	private:
		int peso;
		int velocidadeMaxima;
		float preco;
		
	public:
		Veiculo();
		Veiculo(int, int, float);
		void getData();
		void putData();
};

class CarroPasseio : private Motor, Veiculo {
	private:
		string cor;
		string modelo;
		
	public:
		CarroPasseio();
		CarroPasseio(int, int, int, int, float, char [], char []);
		void getData();
		void putData();
};

class Caminhao : private Motor, Veiculo {
	private: 
		int toneladas;
		int alturaMaxima;
		int comprimento;
		
	public:
		Caminhao();
		Caminhao(int, int, int, int, float, int, int, int);
		void getData();
		void putData();
};


