#include "Classe.h"

Conta::Conta() {
	strcpy(nome, "none");
	numero = 000000;
	saldo = 0.0;
}

Conta::Conta(char *nome_, int numero_, float saldo_) {
	strcpy(nome, nome_);
	numero = numero_;
	saldo = saldo_;
}

void Conta::depositar(float deposito) {
	saldo = saldo + deposito;
}

ContaComum::ContaComum() : Conta() {
	
}

ContaComum::ContaComum(char *nome_, int numero_, float saldo_) 
	: Conta(nome_, numero_, saldo_) {
	
}

void ContaComum::extrato() {
	cout << "\n\n ---- Extrato de Conta Comum ----" << endl;
	cout << "Nome: " << nome << endl;
	cout << "Numero: " << numero << endl;
	cout << "Saldo: " << saldo << endl;
}

ContaPoupanca::ContaPoupanca() : Conta() {
	strcpy(aniversario, "none");
}

ContaPoupanca::ContaPoupanca(char *nome_, int numero_, float saldo_, char *aniversario_) 
	: Conta(nome_, numero_, saldo_) {
		strcpy(aniversario, aniversario_);
}

void ContaPoupanca::extrato() {
	cout << "\n\n ---- Extrato de Conta Poupanca ----" << endl;
	cout << "Nome: " << nome << endl;
	cout << "Numero: " << numero << endl;
	cout << "Saldo: " << saldo << endl;
	cout << "Aniversario: " << aniversario << endl;
}
