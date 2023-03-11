#include <stdio.h>

int main() {
	int num, somatorio = 0, menorValor = 32000, valorPar = 0, cont = 0;
	float media = 0;
	char continuar = 'S';
	
	do {
		printf("Digite um numero: ");
		scanf("%d", &num);
		
		cont++;
		
		somatorio += num;
		
		media += num;
		
		if(num < menorValor) {
			menorValor = num;
		}
		if(num % 2 == 0) {
			valorPar++;
		}
		
		printf("Deseja continuar? Se sim(S), se nao(qualquer tecla).");
		scanf(" %c", &continuar);
		
	} while(continuar == 'S');
	
	printf("O somatorio dos valores e: %d\n", somatorio);
	
	printf("O O menor valor digitado foi: %d\n", menorValor);
	
	printf("A media entre todos os valores e: %.2f\n", media/cont);
	
	printf("%d numeros sao pares.", valorPar);
	
	return 0;
}
