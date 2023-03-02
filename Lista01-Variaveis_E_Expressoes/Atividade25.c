#include <stdio.h>

int main(){
	float a, m2;
	
	printf("Digite um valor em acres: \n");
	scanf("%f", &a);
	
	m2 = a*4048.58;
	
	printf("O valor em metros quadrados e: %f", m2);
	
	return 0;
}
