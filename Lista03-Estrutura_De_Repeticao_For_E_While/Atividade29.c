#include <stdio.h>
#include <string.h>

int main() {
	int idade, cont = 0, pessoaMaisVelha = 0, mulherMaisJovem = 32000, homensMaisDe30 = 0, mulherMenosDe18 = 0;
	char sexo, nome[16], continuar = 'S', nomeMaisJovem[16], nomeMaisVelha[16];
	float media = 0;
	
	while(continuar == 'S') {
	printf("Digite o nome, idade e sexo(F/M)\n");
	scanf("%s %d %c", nome, &idade, &sexo);

	if(idade > pessoaMaisVelha) {
		pessoaMaisVelha = idade;
		strcpy(nomeMaisVelha, nome);
	}
	if(idade < mulherMaisJovem && sexo == 'F') {
		mulherMaisJovem = idade;
		strcpy(nomeMaisJovem, nome);
	}
	if(idade > 0) {
		media += idade;
		cont++;
	}
	if(idade > 30 && sexo == 'M') {
		homensMaisDe30++;
	}
	if(idade < 18 && sexo == 'F') {
		mulherMenosDe18++;
	}
	printf("Deseja continuar? Se sim(S), se nao(N)");
	scanf(" %c", &continuar);
}
    
    printf("A pessoa mais velha e: %s\n", nomeMaisVelha);
    
    printf("A mulher mais jovem e: %s\n", nomeMaisJovem);
    
    printf("A media de idade do grupo e: %.2f\n", media/cont);
    
    printf("%d homens tem mais de 30 anos.\n", homensMaisDe30);
    
    printf("%d mulhere(s) tem menos de 18 anos.", mulherMenosDe18);
    
    return 0;
}
