#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float n1 = 0, n2 = 0, n3 = 0, media = 0;
	
	printf("---CALCULANDO A MÉDIA---\n");
	printf("\nInforme sua nota 1: ");
	scanf("%f", &n1);
	
	printf("\nInforme sua nota 2: ");
	scanf("%f", &n2);
	
	printf("\nInforme sua nota 3: ");
	scanf("%f", &n3);
	
	media = (n1 + n2+ n3) / 3;
	
	printf("\n\nSua media final e: %.2f", media);
	
	
	return 0;
}
