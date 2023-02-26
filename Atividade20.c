#include <stdio.h>

int main(){
	float kg, li;
	
	printf("Digite um valor em quilogramas: \n");
	scanf("%f", &kg);
	
	li = kg/0.45;
	
	printf("O valor em libras e: %f", li);
	
	return 0;
}
