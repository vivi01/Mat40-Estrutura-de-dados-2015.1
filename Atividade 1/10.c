#include <stdio.h> 
#include <math.h> 
#include <stdlib.h>
//10Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas
// no mês. Calcule e mostre o total do seu salário no referido mês
float CalculaSalario(float valorPorHora, int horas);

int main()
{
	float valorHora, vlrSalario;
	int hrs;
	printf("Informe o valor que voce recebe por hora:\n ");
	scanf("%f", &valorHora);
	printf("Informe a quantidade de horas trabalhas por mes:\n ");
	scanf("%d", &hrs);	
	vlrSalario  = CalculaSalario(valorHora,hrs);
	printf("O valor do seu salario eh %.2f", vlrSalario);	
}
float CalculaSalario(float valorPorHora, int horas)
{
	printf("%f\n",valorPorHora);
	printf("%d\n",horas);

	float valorSalario;
	valorSalario = valorPorHora * horas;
	return valorSalario;
}
