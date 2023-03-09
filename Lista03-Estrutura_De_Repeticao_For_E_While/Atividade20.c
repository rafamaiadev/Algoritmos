#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int i = 0, num, numAcimaDe5 = 0, numDivPor3 = 0;
	
    srand(time(NULL));
    
    printf("Os numeros sorteados foram:\n");
    
    while(i < 20) {
    	num = rand() % 11;
    	
    	printf("%d \n", num);
    	
    	if(num > 5) {
    		numAcimaDe5++;
		}
		if(num % 3 == 0 && num != 0) {
			numDivPor3++;
		} 
		
    	i++;
	}
	
	printf("Foram sorteados %d numeros maiores que 5.\n", numAcimaDe5);
	
	printf("Foram sorteados %d numeros que sao divisiveis por 3.\n", numDivPor3);
	
	return 0;
}
