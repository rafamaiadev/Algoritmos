#include <stdio.h>

int main() {
	int horaInicial, minutoInicial, segundoInicial;
	int duracaoSegundos, horaTermino, minutoTermino, segundoTermino;
	int totalSegundosInicio, totalSegundosFinal;
	
	printf("Digite o valor inicial em (hh:mm:ss)\n");
	scanf("%d:%d:%d", &horaInicial, &minutoInicial, &segundoInicial);
	
	printf("Digite um valor para a duracao em segundos: \n");
	scanf("%d", &duracaoSegundos);
	
	totalSegundosInicio = (horaInicial*3600) + (minutoInicial*60) + segundoInicial;
	
	totalSegundosFinal = totalSegundosInicio + duracaoSegundos;
		
    horaTermino = totalSegundosFinal / 3600;
	
	minutoTermino = (totalSegundosFinal % 3600)/60;
	
	segundoTermino = totalSegundosFinal % 60;
	
	printf("O valor em horas, minutos e segundos do termino e: %02d:%02d:%02d", horaTermino, minutoTermino, segundoTermino);
	
	return 0;
	
}
