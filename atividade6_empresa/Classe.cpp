#include "Classe.h"

Empresa::Empresa() {
	strcpy(nome, "/0");
	strcpy(endereco, "/0");
	strcpy(cidade, "/0");
	strcpy(estado, "/0");
	strcpy(cep, "/0");
	strcpy(telefone, "/0");
}

Empresa::Empresa(char nome_[], char endereco_[], char cidade_[], char estado_[], char cep_[], char telefone_[]) {
	strcpy(nome, nome_);
	strcpy(endereco, endereco_);
	strcpy(cidade, cidade_);
	strcpy(estado, estado_);
	strcpy(cep, cep_);
	strcpy(telefone, telefone_);
}

void Empresa::getData() {
	cout << "\nNome: ";
	fgets(nome, sizeof(nome)/sizeof(char), stdin);
	cout << "\nEndereco: ";
	fgets(endereco, sizeof(endereco)/sizeof(char), stdin);
	cout << "\nCidade: ";
	fgets(cidade, sizeof(cidade)/sizeof(char), stdin);	
	cout << "\nEstado: ";
	fgets(estado, sizeof(estado)/sizeof(char), stdin);
	cout << "\nCEP: ";
	fgets(cep, sizeof(cep)/sizeof(char), stdin);
	cout << "\nTelefone: ";
	fgets(telefone, sizeof(telefone)/sizeof(char), stdin);			
}

void Empresa::putData() {
	cout << "\nDADOS DA EMPRESA: " << nome << endl;
	cout << "Endereco => " << endereco << endl;
	cout << "Cidade => " << cidade << endl;
	cout << "Estado => " << estado << endl;
	cout << "CEP => " << cep << endl;
	cout << "Telefone => " << telefone << endl;
}


Restaurante::Restaurante():Empresa() {
	strcpy(tipoComida, "/0");
	precoMedio = 0;
}

Restaurante::Restaurante(char nome_[], 
	char endereco_[], 
	char cidade_[], 
	char estado_[], 
	char cep_[], 
	char telefone_[], 
	char tipoComida_[], 
	float precoMedio_) : Empresa(
	nome_, 
	endereco_,
	cidade_,
	estado_,
	cep_,
	telefone_) {
		
	strcpy(tipoComida, tipoComida_);
	precoMedio = precoMedio_;
}

void Restaurante::getData() {
	Empresa::getData();
	
	cout << "\nTipo de Comida: ";
	fgets(tipoComida, sizeof(tipoComida)/sizeof(char), stdin);
	cout << "\nPreco Medio: ";
	cin >> precoMedio;		
}

void Restaurante::putData() {
	Empresa::putData();
	
	cout << "Tipo de Comida => " << tipoComida << endl;
	cout << "Preco Medio => R$" <<  precoMedio << endl;
}
