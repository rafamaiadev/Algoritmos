#include <stdio.h>

int main (){
	float real, dolar;
	
	printf("A cotacao do dolar e: 5.21 \n");
	
	printf("Digite o valor desejado em reais: \n");
	scanf("%f", &real);
	
	dolar = real/5.21;
	
	printf("O valor em dolares e: %.2f", dolar);
	
	return 0;
}
