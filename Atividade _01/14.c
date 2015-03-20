#include <stdio.h> 
#include <math.h> 
#include <stdlib.h>
//10Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas
// no mês. Calcule e mostre o total do seu salário no referido mês
float CalculaSalario(float salario);

int main()
{
	float sal, vlrSalario;
	printf("Informe o valor do seu salario:\n ");
	scanf("%f", &sal);
	vlrSalario  = CalculaSalario(sal);
	printf("O valor do seu salario eh %.2f", vlrSalario);	
}
float CalculaSalario(float salario)
{
   	float valorSalario;
	valorSalario = salario + salario*(0.25);
	return valorSalario;
}
