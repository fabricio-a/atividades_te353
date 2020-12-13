#include <iostream>
#include <string.h>

using namespace std;

class Empresa {
	private:
		char nome[100];
		char endereco[100];
		char cidade[50];
		char estado[50];
		char cep[15];
		char telefone[20];
	
	public:
		Empresa();
		Empresa(char [], char [], char [], char [], char [], char []);
		
		void getData();
		void putData();
};

class Restaurante : private Empresa {
	private:
		char tipoComida[50];
		float precoMedio;
		
	public: 
		Restaurante();
		Restaurante(char nome_[], 
			char endereco_[], 
			char cidade_[], 
			char estado_[], 
			char cep_[], 
			char telefone_[], 
			char tipoComida_[], 
			float precoMedio_
		);
		
		void getData();
		void putData();
}; 
