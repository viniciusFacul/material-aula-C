#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float mensalidade = 0.0, transporte = 0.0, alimentacao = 0.0, valorMensal = 0.0, valorAnual = 0.0;
	
	printf("--Calculando o gasto mensal e anul com a faculdade!--");
	
	printf("\nInforme a mensalidade da sua faculdade: ");
	scanf("%f", &mensalidade);
	
	printf("\nInforme seu gasto mensal com transporte: ");
	scanf("%f", &transporte);
	
	printf("\nInforme seu gasto mensal com alimentacao: ");
	scanf("%f", &alimentacao);
	
	valorMensal = mensalidade + transporte + alimentacao;
	valorAnual = valorMensal * 12;
	
	printf("\nVoce gasta %2.f por mes e %2.f por ano.", valorMensal, valorAnual);
	
	
	
	return 0;
}
