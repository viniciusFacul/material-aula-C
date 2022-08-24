#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	// Declaracao vari�veis	
	int distancia, numeroPedagios = 0;
	float autonomiaVeiculo, precoCombustivel, 
	      valorUnitarioPedagio = 0.0;
	double consumoCombustivel, custoCombustivel, custoPedagios,
	      custoTotalViagem = 0.0;
	
	// Entrada
	printf("Digite a dist�ncia (kilometros):\n");
	scanf("%i", &distancia);
	printf("Digite a autonomia do ve�culo (km/l):\n");
	scanf("%f", &autonomiaVeiculo);
	printf("Digite o pre�o do combust�vel (l):\n");
	scanf("%f", &precoCombustivel);
	printf("Digite o n�mero de ped�gios:\n");
	scanf("%i", &numeroPedagios);
	printf("Digite o valor m�dido dos ped�gios:\n");
	scanf("%f", &valorUnitarioPedagio);
	
	//Processamento
	consumoCombustivel = distancia / autonomiaVeiculo;
	custoCombustivel = consumoCombustivel * precoCombustivel;
	custoPedagios = numeroPedagios * valorUnitarioPedagio;
	custoTotalViagem = (custoCombustivel + custoPedagios);
	
	//Sa�da
	printf("\n");
	printf("..::RELAT�RIO::..\n");
	printf("Combust�vel:\t %3.2f \n", custoCombustivel);
	printf("Ped�gios:   \t %3.2f \n", custoPedagios);
	printf("Total:      \t %3.2f \n", custoTotalViagem);
	
	return 0;
}


