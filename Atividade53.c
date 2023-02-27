#include <stdio.h>

int main() {
	float comprimento, largura, precoMetro, custoTotal;
	
	printf("Digite um valor para o preco do metro:\n");
	scanf("%f", &precoMetro);
	
	printf("Digite um valor para a largura:\n");
	scanf("%f", &largura);
	
	printf("Digite um valor para o comprimento:\n");
	scanf("%f", &comprimento);
	
	custoTotal = ((2*comprimento)+(2*largura))*(precoMetro);
	
	printf("O custo total para cercar o terreno e de: %.2f", custoTotal); 
	
	return 0;	
}
