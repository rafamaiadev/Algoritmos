#include <stdio.h>

int main() {
	int i = 0;
	
	do {
		printf("%d ", i);
		i+=3;
		
	} while(i<=30);
	
	printf("Acabou!");
	
	return 0;
} 
