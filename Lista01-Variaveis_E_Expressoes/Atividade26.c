#include <stdio.h>

int main(){
	float m2, hec;
	
	printf("Digite um valor em metros quadrados: \n");
	scanf("%f", &m2);
	
	hec = m2*0.0001;
	
	printf("O valor em hectares e: %f", hec);
	
	return 0;
}
