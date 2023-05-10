#include <stdio.h>

struct Produto {
	int codigo;
	char nome[16];
	float preco;
	int quantidade;
}produto[2];

int main() {
	int codDesejado = 0, quantDesejado = 0, i; 
	
	do{
		for(i=0; i<2; i++) {
		printf("Digite o codigo do produto %d: ", i+1);
		scanf("%d", &produto[i].codigo);
		
		printf("Digite o nome do produto %d: ", i+1);
		scanf(" %15[^\n]", produto[i].nome);
		
		printf("Digite o preco do produto %d: ", i+1);
		scanf("%f", &produto[i].preco);
		
		printf("Digite a quantidade do produto %d: ", i+1);
		scanf("%d", &produto[i].quantidade);
		printf("\n");
		}
		
		printf("Digite o codigo do produto desejado(digite 0 para encerrar): ");
		scanf("%d", &codDesejado);
		if(codDesejado == 0)break;
		
		printf("Digite a quantidade desejada do produto: ");
		scanf("%d", &quantDesejado);
		system("cls");
		for(i=0; i<2; i++) {
			if(codDesejado == produto[i].codigo && produto[i].quantidade >= quantDesejado) {
				produto[i].quantidade -= quantDesejado;
				printf("Produto (%s) encontrado !\n", produto[i].nome);
				printf("O estoque restante do produto e: %d\n", produto[i].quantidade);
		}
		}
	
	} while(codDesejado != 0);
	
	return 0;
}
