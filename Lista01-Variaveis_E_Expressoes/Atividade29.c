#include <stdio.h>

int main (){
	float np1, np2, np3, np4, media;
	
	printf("Digite o numero da nota 1: \n");
	scanf("%f", &np1);
	
	printf("Digite o numero da nota 2: \n");
	scanf("%f", &np2);
	
	printf("Digite o numero da nota 3: \n");
	scanf("%f", &np3);
	
	printf("Digite o numero da nota 4: \n");
	scanf("%f", &np4);
	
	media = (np1+np2+np3+np4)/4;
	
	printf("O resultado da media e: %.1f", media);
	
	return 0;
}
