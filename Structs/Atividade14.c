#include <stdio.h>

struct Carro {
	char marca[15];
	int ano;
	float preco;
}carro[2];

int i;
float p = -1;
inserirCarros() {
	for(i=0; i<2; i++) {
		printf("Digite a marca do carro %d (Max 15 letras):", i+1);
		scanf(" %15[^\n]", carro[i].marca);
		
		printf("Digite o ano do carro %d:", i+1);
		scanf("%d", &carro[i].ano);
		
		printf("Digite o preco do carro %d:", i+1);
		scanf("%f", &carro[i].preco);
	}
	
	system("cls");
	
	printf("---Carros com preco menor que p---\n");
	for(i=0; i<2; i++) {
		if(carro[i].preco < p) {
			printf("Marca: %s\n", carro[i].marca);
			printf("Ano: %d\n", carro[i].ano);
			printf("Preco: %.2f\n", carro[i].preco);
			printf("\n");		
		} 			
	}
		
	
}
int main() {
	
	while(p != 0) {	
		printf("Insira um valor para p (digite 0 para encerrar):");
		scanf("%f", &p);
		
		inserirCarros();
		
	}
	
	return 0;
}
