#include <stdio.h>
#include <stdlib.h>

/* Mar�al, J. 
 * Exemplo programa em C, pr�tica: 
 * vari�veis, printf, scanf.
 */

int main(int argc, char *argv[]) {
	// Declara��o das vari�veis
	float m = 0.0;
	float p1, p2 = 0.0;
	
	// Entrada
	printf("..:: CALCULADORA DE MEDIA ::..\n");
	printf("Digite o valor da primeira nota:\n");	
	scanf("%f", &p1);
	printf("Digite o valor da segunda nota:\n");	
	scanf("%f", &p2);

	// Processamento
	m = (p1 + p2) / 2;
	
	// Sa�da
	printf("Sua media e: %f", m);
	
	return 0;
}





