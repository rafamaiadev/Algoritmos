#include <stdio.h>

int main(){
	float hec, m2;
	
	printf("Digite um valor em hectares: \n");
	scanf("%f", &hec);
	
	m2 = hec*10000;
	
	printf("O valor em metros quadrados e: %f", m2);
	
	return 0;
}
