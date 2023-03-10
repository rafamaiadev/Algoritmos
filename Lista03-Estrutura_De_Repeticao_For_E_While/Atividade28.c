#include <stdio.h>

int main() {
	int idade, maiorIdade = 0, homens = 0, mulherJovem = 32000;
	char sexo, continuar = 'S';
	float mediaHomens = 0;
	
	while(continuar == 'S') {
		printf("Digite a idade e o sexo(F/M):\n");
		scanf("%d %c", &idade, &sexo);
		
		if(sexo == 'M') {
			homens++;
			mediaHomens += idade;
		} else if(sexo == 'F' && idade < mulherJovem) {
			mulherJovem = idade;
		}
		if(idade > maiorIdade) {
			maiorIdade = idade;
		}
		
		printf("Deseja continuar? Se sim(S), se nao(N).\n");
		scanf(" %c", &continuar);
	}
	
	printf("A maior idade inserida foi: %d\n", maiorIdade);
	
	printf("Foram cadastrados %d homens.\n", homens);
	
	printf("A idade da mulher mais jovem e: %d\n", mulherJovem);
	
	printf("A media das idades dos homens e: %.2f", mediaHomens/homens);
	
	return 0;
}
