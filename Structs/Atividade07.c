#include <stdio.h>
#include <math.h>

struct CoordPolar {
	float raio;
	float argumento;
}polar;

struct CoordCartesiana {
	float x;
	float y;
}cartesiana;

int main() {
	printf("Digite o valor do raio: ");
	scanf("%f", &polar.raio);
	
	printf("Digite o valor do argumento: ");
	scanf("%f", &polar.argumento);
	
	float rad = M_PI/180 * polar.argumento;
	
	cartesiana.x = (polar.argumento == 90 || polar.argumento == 270) ? 0 : polar.raio * cos(rad);
	cartesiana.y = (polar.argumento == 0 || polar.argumento == 180) ? 0 : polar.raio * sin(rad);
	
	printf("As Coordenadas sao (%.2f, %.2f)", cartesiana.x, cartesiana.y);
	
	return 0;
}
