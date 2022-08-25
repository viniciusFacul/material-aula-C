#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int ano = 0, diasVividos = 0;
	
	printf("--CALCULANDO OS DIAS VIVIDOS--");
	printf("\n\nInforme o ano do seu nascimento: ");
	scanf("%i", &ano);
	
	diasVividos = (2022 - ano) * 365;
	
	printf("\n\n--Voce ja viveu %i dias.", diasVividos);
	
	
	return 0;
}
