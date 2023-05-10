#include <stdio.h>
#include <math.h>

struct NumComplexo {
	float real;
	float imaginario;
}z, w, resultadoSoma, resultadoSub, resultadoMult;

void soma(struct NumComplexo z, struct NumComplexo w) {
	resultadoSoma.real = z.real + w.real;
	resultadoSoma.imaginario = z.imaginario + w.imaginario;
	printf("Soma: %.2f + %.2fi\n", resultadoSoma.real, resultadoSoma.imaginario);
}

void sub(struct NumComplexo z, struct NumComplexo w) {
	resultadoSub.real = z.real - w.real;
	resultadoSub.imaginario = z.imaginario - w.imaginario;
	printf("Subtracao: %.2f + %.2fi\n", resultadoSub.real, resultadoSub.imaginario);
}

void mult(struct NumComplexo z, struct NumComplexo w) {
	resultadoMult.real = z.real * w.real;
	resultadoMult.imaginario = z.imaginario * w.imaginario;
	printf("Multiplicacao: %.2f + %.2fi\n", resultadoMult.real, resultadoMult.imaginario);
}
int main() {
	printf("Digite o valor real de z: ");
    scanf("%f", &z.real);
    printf("Digite o valor imaginario de z: ");
    scanf("%f", &z.imaginario);
    
    printf("Digite o valor real de w: ");
    scanf("%f", &w.real);
    printf("Digite o valor imaginario de w: ");
    scanf("%f", &w.imaginario);
    
    soma(z, w);
    sub(z, w);
    mult(z, w);
}
