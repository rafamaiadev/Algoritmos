#include <stdio.h>

int main (){
	float m, j;
	
	printf("Digite um valor em metros: \n");
	scanf("%f", &m);
	
	j = m/0.91;
	
	printf("O valor em jardas e: %f", j);
	
	return 0;
}
