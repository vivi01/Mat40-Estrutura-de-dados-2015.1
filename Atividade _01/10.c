#include <stdio.h> 
#include <math.h> 
#include <stdlib.h>
//10Fa�a um Programa que pergunte quanto voc� ganha por hora e o n�mero de horas trabalhadas
// no m�s. Calcule e mostre o total do seu sal�rio no referido m�s
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
