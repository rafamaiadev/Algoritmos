#include <stdio.h>

int main() {
	
	struct Horario {
		int hora;
		int minutos;
		int segundos;
	}; 
	
	struct Data {
		int dia;
		int mes;
		int ano;
	};
	
	struct Compromisso {
		struct Data data;
		struct Horario horario;
		char texto[20];
	} compromisso;
	
	compromisso.data.dia = 10;
	
	printf("%d", compromisso.data.dia);
	 
	return 0;
}
