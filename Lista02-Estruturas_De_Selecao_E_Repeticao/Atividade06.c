#include <stdio.h>

int main() {
	int valorHora, horasTrabalhadas, salario = 0, bonus = 0;
	
	printf("Insira o valor da hora de trabalho:\n");
	scanf("%d", &valorHora);
	
	printf("Insira as horas de trabalho por semana:\n");
	scanf("%d", &horasTrabalhadas);
	
	if(horasTrabalhadas <= 40) {
		
		salario = valorHora*horasTrabalhadas;
		
	} else if(horasTrabalhadas <= 60) {
		salario = valorHora*40;
			
		bonus = valorHora*(horasTrabalhadas-40) *1.5;
		
	} else {
		salario = valorHora*40;
		
		bonus = valorHora*20*1.5;
		
		bonus += valorHora*(horasTrabalhadas-60)*2;
	}
	
	salario += bonus;
	printf("O salario semanal e: %d", salario);
	
	return 0;
}
