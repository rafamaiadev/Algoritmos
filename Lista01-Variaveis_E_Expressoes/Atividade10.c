#include <stdio.h>

int main() {
	float kh, ms;
	
	printf("Digite um numero para a velocidade: \n");
	scanf("%f", &kh);
	
	ms = kh/3.6;
	
	printf("O valor em ms e: %f", ms);
	
	return 0;
}
