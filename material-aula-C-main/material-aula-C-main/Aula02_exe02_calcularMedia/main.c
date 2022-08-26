-#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float n1 = 0.0;
	float n2 = 0.0;
	float m = 0.0;
	
	//entrada
	printf("digite a nota 1: ");
	scanf("%f", &n1);
	printf("digite a nota 2: ");
	scanf("%f", &n2);
	
	
	//processamento
	m = (n1 + n2) / 2;
	
	
	//saída
	printf("%f", m);
	
	
	return 0;
}
