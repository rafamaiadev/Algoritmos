#include <stdio.h>

int main() {
	int i = 0, idade = 0, homens = 0, mulheres = 0, mulheresMaisDe20 = 0;
	float mediaGrupo = 0, mediaHomens = 0;
	char sexo;
	while(i < 5) {
		printf("Digite a idade e o sexo (F/M) da pessoa:");
		scanf("%d", &idade);
		
		mediaGrupo += idade;
		
		if(sexo == 'F') {
			mulheres++;
		} else if(sexo == 'M') {
			mediaHomens += idade;
			homens++;
		}
		if(sexo == 'F' && idade > 20) {
			mulheresMaisDe20++;
		}
		
		i++;		 				
        }
        
        printf("%d homens foram cadastrados", homens);
        
        printf("%d mulheres foram cadastradas", mulheres);
        
        printf("A media do grupo e %.2f", mediaGrupo/5);
        
        printf("A media do homens e %.2f", mediaHomens/homens);
        
        printf("%d mulheres tem mais de 20 anos", mulheresMaisDe20);
        
        return 0;
   }

