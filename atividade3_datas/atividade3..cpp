//Desenvolvido por Fabricio Alves Santana
//TE352 - Semana 3

#include <iostream>
#include <string.h>

using namespace std;

class DateOfBirth {
	private:
		int date[3];
		char months[12][10] = { "Janeiro",
			"Fevereiro",
			"Marco",
			"Abril",
			"Maio",
			"Junho",
			"Julho",
			"Agosto",
			"Setembro",
			"Outubro",
			"Novembro",
			"Dezembro" };
		
	public:
		void setDate(char name[], int i) {
			cout << name;
			cin >> date[i];
		}
		
		bool checkDate() {
			if(!(date[1] <= 12 && date[1] > 0)) return false;
			if(date[0] < 1) return false;
			
			if(date[1]==2) {
				if(isLeap() && (date[1] <= 29)) return true;
				else if(date[1] <= 28) return true;
				return false;
			}
			else if(date[1] % 2 == 0 && date[1] > 7) {
				if(date[0] <= 31) return true;
			} 			
			else if(date[1] % 2 == 0 && date[1] < 8) {
				if(date[0] <= 30) return true;
			} 
			else if(date[1] < 8){
				if(date[0] <= 31) return true;
			}		
			else {
				if(date[0] <= 30) return true;
			}		
			
			return false;
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
			cout << "\n\n" << date[0] << " de " << months[date[1] - 1] << " de " << date[2] << "\n";
		}
		
		void printZodiac() {
			if((date[1] == 1 && date[0] >= 22) || (date[1] == 2 && date[0] <= 19)) cout << "Aquario"; 
			else if((date[1] == 2 && date[0] >= 20) || (date[1] == 3 && date[0] <= 20)) cout << "Peixes";
			else if((date[1] == 3 && date[0] >= 21) || (date[1] == 4 && date[0] <= 20)) cout << "Aries";
			else if((date[1] == 4 && date[0] >= 21) || (date[1] == 5 && date[0] <= 21)) cout << "Touro"; 
			else if((date[1] == 5 && date[0] >= 22) || (date[1] == 6 && date[0] <= 21)) cout << "Gemeos"; 
			else if((date[1] == 6 && date[0] >= 22) || (date[1] == 7 && date[0] <= 23)) cout << "Cancer";
			else if((date[1] == 7 && date[0] >= 24) || (date[1] == 8 && date[0] <= 23)) cout << "Leao"; 
			else if((date[1] == 8 && date[0] >= 24) || (date[1] == 9 && date[0] <= 21)) cout << "Virgem"; 
			else if((date[1] == 9 && date[0] >= 22) || (date[1] == 10 && date[0] <= 23)) cout << "Libra"; 
			else if((date[1] == 10 && date[0] >= 24) || (date[1] == 11 && date[0] <= 23)) cout << "Escorpiao"; 
			else if((date[1] == 11 && date[0] >= 24) || (date[1] == 12 && date[0] <= 21)) cout << "Sagitario"; 
			else if((date[1] == 12 && date[0] >= 22) || (date[1] == 1 && date[0] <= 21)) cout << "Capricornio";
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
	
	system("PAUSE");
	
	return 0;
}
