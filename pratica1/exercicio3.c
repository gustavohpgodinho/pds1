#include <stdio.h>

void main(){
/* ======================================
	float rendimento;
	rendimento = 0.56/100;
	float poupanca;
	poupanca = 789.54;

	// primeiro mes
	poupanca = poupanca + poupanca*rendimento;

	// segundo mes
	poupanca = poupanca + 303.20;
	poupanca = poupanca + poupanca*rendimento;

	// terceiro mes
	poupanca = poupanca - 58.25;
	poupanca = poupanca + poupanca*rendimento;

	// quarto mes
	printf("%.2f", poupanca);
====================================== */
	float rendimento = 0.56/100;
	float poupanca = 789.54;

	// primeiro mes
	poupanca *= (1 + rendimento);

	// segundo mes
	poupanca += 303.20;
	poupanca *= (1 + rendimento);

	// terceiro mes
	poupanca -= 58.25;
	poupanca *= (1 + rendimento);

	// quarto mes
	printf("valor poupanca: %.2f R$\n\n", poupanca);

}