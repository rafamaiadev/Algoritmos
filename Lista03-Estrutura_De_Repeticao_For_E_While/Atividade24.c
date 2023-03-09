#include <stdio.h>

int main() {
	int i = 0, peso, altura, maisDe90 = 0, menorQue50 = 0, maiorQue100 = 0;
	float mediaAltura = 0;
	
	while(i < 7) {
		printf("Digite o peso e a altura em (cm) desejada:");
		scanf("%d%d", &peso, &altura);
		
		mediaAltura += altura;
		
		if(peso > 90) {
			maisDe90++;
		} else if(peso < 50 && altura < 160) {
			menorQue50++;
		}
		if(peso > 100 && altura > 190) {
			maiorQue100++;
		}
		i++;
	}
	
	printf("A media das alturas foi de:%.2f\n", mediaAltura/7);
	
	printf("%d pessoas pesam mais de 90kg.\n", maisDe90);
	
	printf("%d pessoas pesam mais de 100kg e medem mais de 1.90.\n", maiorQue100);
	
	printf("%d pessoas pesam menos de 50kg e medem menos de 1.60.", menorQue50);
	
	return 0;
}
