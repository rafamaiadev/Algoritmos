#include <stdio.h>

int main() {
    int i, n1 = 1, n2 = 1, proximo;
    
    printf("Sequencia de Fibonacci:\n");

    for (i = 0; i < 10; i++) {
    	
        printf("%d ", n1);
        
        proximo = n1 + n2;
        
        n1 = n2;
        
        n2 = proximo;
    }

    return 0;
}
