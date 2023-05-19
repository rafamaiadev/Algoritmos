# include <stdio.h>

conversosSegundos(int,int,int);

int main() {
	conversorSegundos(2,5,10);	
}

conversorSegundos(int num1,int num2,int num3) {
	int horas = num1*3600;
	int minutos = num2*60;
	int segundos = num3;
	
	int tempoTotal = horas+minutos+segundos;
	
	return printf("O tempo convertido em segundos e: %ds", tempoTotal);
}
