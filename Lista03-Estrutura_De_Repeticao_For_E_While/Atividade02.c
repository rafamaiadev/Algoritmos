#include <stdio.h>

int main() {
	int i;
	
	for(i = 100; i >= 0; i-= 10) {
		printf("%d ", i);
	}
	
	printf("Acabou !");
	
	return 0;
}
