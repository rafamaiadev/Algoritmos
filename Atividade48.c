#include <stdio.h>

int main() {
	int segundos, horas, minutos,restoSegundos;
	
	printf("Digite um numero em segundos: \n");
	scanf("%d", &segundos);
	
	horas = segundos/3600;
	restoSegundos = segundos % 3600;
	minutos = restoSegundos/60;
	restoSegundos = restoSegundos % 60;
	
	printf("O numero digitado corresponde a %d:%d:%d", horas, minutos, restoSegundos);
	
	return 0;
}
