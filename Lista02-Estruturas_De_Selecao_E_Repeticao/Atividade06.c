#include <stdio.h>

int main() {
	int valorHora, horasTrabalhadas, salario, salarioBonus1, salarioBonus2;
	
	printf("Insira o valor da hora de trabalho:\n");
	scanf("%d", &valorHora);
	
	printf("Insira as horas de trabalho por semana:\n");
	scanf("%d", &horasTrabalhadas);
	
	if(horasTrabalhadas <= 40) {
		
		salario = valorHora*horasTrabalhadas;
		
		printf("O salario semanal e: %d", salario);
		
	} else if(horasTrabalhadas > 40 && horasTrabalhadas <= 60) {
		
		salarioBonus1 = 1.5*(valorHora*horasTrabalhadas);
		
		printf("O salario semanal e: %d", salarioBonus1);
		
	} else {
		
		salarioBonus2 = 2*(valorHora*horasTrabalhadas);
		
		printf("O salario semanal e: %d", salarioBonus2);
	}
	
	return 0;
}
