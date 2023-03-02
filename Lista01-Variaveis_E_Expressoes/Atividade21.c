#include <stdio.h>

int main(){
	float li, kg;
	
	printf("Digite um valor em libras: \n");
	scanf("%f", &li);
	
	kg = li*0.45;
	
	printf("O valor em quilogramas e: %f", kg);
	
	return 0;
}
