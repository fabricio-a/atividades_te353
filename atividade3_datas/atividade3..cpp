//Desenvolvido por Fabricio Alves Santana
//TE352 - Semana 3

#include <iostream>

using namespace std;

class DateOfBirth {
	private:
		int date[3];
		
	public:
		void setDate(char name[], int i) {
			cout << name;
			cin >> date[i];
		}
		
		bool checkDate() {
			if(!(date[1] <= 12 && date[1] > 0)) return false;
			return true;
		}
		
		bool isLeap() {
			if(!(date[2] % 4)) {
				if(!(date[2] % 100)){
					if(!(date[2] % 400)) return true;
					else return false;
				} else return true;
			} else return false;
		}
		
		void printInFull() {
			
			cout << date[0] << " de" << " mes" << " de " << date[2];
		}
		
		void printZodiac() {
			cout << "\nsigno";
		}
};

int main() {
	DateOfBirth date;
	int aux[3];
	
	cout << "Entre com a Data de Nascimento\n";
	date.setDate("Dia: ", 0);
	date.setDate("Mes: ", 1);
	date.setDate("Ano: ", 2);
	
	if(date.checkDate()) {
		date.printInFull();
		date.printZodiac();
		
		if(date.isLeap()) cout << "\nEh bissexto!";
		else cout << "\nNao eh bissexto!";
	} else {
		cout << "Data Invalida!!";
	}
	
	return 0;
}
