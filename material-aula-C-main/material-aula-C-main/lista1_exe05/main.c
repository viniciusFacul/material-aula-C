#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float horaAula = 25.00, salarioBruto = 0.0, salarioLiq = 0.0;
	float ir = 0.0, inss = 0.0;
	int quantAulas = 0;
	
	printf("Informe quantas aulas por semana o professor leciona: ");
	scanf("%i", &quantAulas);
	
	salarioBruto = ((quantAulas * 4) * horaAula);
	salarioBruto = salarioBruto + (salarioBruto * (10 / 100));
	
	ir = salarioBruto * (5 / 100);
	inss = salarioBruto * (7 / 100);
	
	salarioLiq = salarioBruto - ir - inss;
	
	printf("\n--RESULTADOS--\n")
	
	printf("Seu salario bruto mensal: %.2f", salarioBruto);
	printf("")
	
	
	
	return 0;
}
