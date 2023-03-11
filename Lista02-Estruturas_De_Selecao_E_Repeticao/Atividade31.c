#include <stdio.h>

int main() {
	int idade, cont = 0, pessoasDe21 = 0;
	char continuar = 'S';
	float media;
	do {
		printf("Digite uma idade: ");
		scanf("%d", &idade);
		
		printf("Deseja continuar? Se sim(S), se nao(qualquer tecla) ");
		scanf(" %c", &continuar);
		
		if(idade > 0) {
			cont++;
			media += idade;
		}
		if(idade >= 21) {
			pessoasDe21++;
		}
		
	} while(continuar == 'S');
	
	printf("Foram digitadas %d idades \n", cont);
	printf("A media entre as idades digitadas e: %.2f \n", media/cont);
	printf("%d pessoas tem 21 anos ou mais", pessoasDe21);
}
