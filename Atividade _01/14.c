#include <stdio.h> 
#include <math.h> 
#include <stdlib.h>
//10Fa�a um Programa que pergunte quanto voc� ganha por hora e o n�mero de horas trabalhadas
// no m�s. Calcule e mostre o total do seu sal�rio no referido m�s
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
