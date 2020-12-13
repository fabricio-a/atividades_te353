#include <iostream>
#include "Classe.h"

int main() {
	Restaurante restaurante;
	
	std::cout << "Entre com os dados do restaurante: " << std::endl;
	
	restaurante.getData();
	std::cout << " ------------------------------------------------ ";
	restaurante.putData();
	
	return 0;
}
