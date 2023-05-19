# include <stdio.h>

void mediaAluno(float,float,float,char);

int main() {
	float nota1, nota2, nota3;
	char Letra;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);
	
	printf("Digite a terceira nota: ");
	scanf("%f", &nota3);
	
	do {
        printf("Digite as letra A ou P para determinar o calculo da media: ");
        scanf(" %c", &Letra);
        
		system("cls");
		
        if (Letra == 'A' || Letra == 'P') {
            mediaAluno(nota1, nota2, nota3, Letra);
            break;
        } else {
            printf("A letra digitada esta incorreta.\n");
        }
    } while (1);
	
	return 0;	
}

void mediaAluno(float num1,float num2,float num3,char letra) {
	float media = 0, mediaPonderada = 0;
	
	if(letra == 'A') {
		media = (num1+num2+num3)/3;
		printf("A media das notas e: %.2f", media);
	} else if(letra == 'P') {
		mediaPonderada = ((num1*5) + (num2*3) + (num3*2))/10;
		printf("A media ponderada das notas e: %.2f", mediaPonderada);
	} else {
		printf("A letra digitada esta incorreta");
	}
}
