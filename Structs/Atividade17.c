#include <stdio.h>

struct EletroDomest {
	char nome[16];
	float potencia;
	float horasPorDia;
}eletroDomest[2];

int main() {
	int i, dias = 0;
	float consumoTotal = 0, consumoIndividual[2], consumoRelativo[2];
	
	printf("Digite os dias de uso para realizacao do calculo: ");
	scanf("%d", &dias);
	
	for(i=0; i<2; i++) {
		printf("Digite o eletrodomestico desejado: ");
		scanf(" %16[^\n]", eletroDomest[i].nome);
		
		printf("Digite a potencia (KW/H) do eletrodomestico: ");
		scanf("%f", &eletroDomest[i].potencia);
		
		printf("Digite o tempo de uso por dia (em horas) do eletrodomestico: ");
		scanf("%f", &eletroDomest[i].horasPorDia);
		
		consumoIndividual[i] = dias*eletroDomest[i].horasPorDia*eletroDomest[i].potencia;
		consumoTotal+= consumoIndividual[i];
	}
	
	for(i=0; i<2; i++) {
		consumoRelativo[i] = (consumoIndividual[i]/consumoTotal)*100;
	}
	system("cls");
	printf("O consumo total foi de %.2f\n", consumoTotal);
	
	for(i=0; i<2; i++) {
		printf("O consumo relativo do(a) %s em(KW/H) foi de %.2f%%\n", eletroDomest[i].nome, consumoRelativo[i]);
	}
	
	return 0;
}
