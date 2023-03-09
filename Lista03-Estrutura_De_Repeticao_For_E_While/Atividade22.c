#include <stdio.h>

int main() {
	int i = 0, idade, media = 0, maior18 = 0, menor5 = 0, maiorIdade = 0;
	
	while(i < 10) {
		printf("Digite um numero para a idade:\n");
		scanf("%d", &idade);
		
		media += idade;
		
		if(idade > 18) {
			maior18++;
		} else if(idade < 5) {
			menor5++;
		}
		if(idade > maiorIdade) {
			maiorIdade = idade;
		}
		i++;
	}
	
	printf("A media das idades e: %d\n", media/10);
	
	printf("%d pessoas sao maiores de 18 anos.\n", maior18);
	
	printf("%d pessoas sao menores de 5 anos.\n", menor5);
	
	printf("A maior idade inserida foi: %d", maiorIdade);
	
	return 0;
	
}
