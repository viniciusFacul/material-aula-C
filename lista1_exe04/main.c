#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float pi = 3.14, raio = 0.0, area = 0.0;
	
	printf("--CALCULANDO A AREA DE UMA CIRCUNFERENCIA--");
	
	printf("\nInforme o raio da circunferencia em metros: ");
	scanf("%f", &raio);
	
	area = pi * pow(raio, 2);
	
	printf("\nA area desta circunferencia e: %.2f metros quadrados\n\n", area);

	system("pause");
	return 0;
}

