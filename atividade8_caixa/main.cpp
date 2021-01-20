//Desenvolvido por Fabricio Alves Santana
//TE352 - Semana 8

#include "Classe.h"

int main() {
	ContaComum contaComum("Pessoa Teste", 999999, 0);
	ContaPoupanca contaPoupanca("Outra Pessoa Teste", 111111, 0, "01/01/01");
	
	contaComum.depositar(10);
	contaPoupanca.depositar(20);
	
	contaComum.extrato();
	contaPoupanca.extrato();
	
	return 0;
}
