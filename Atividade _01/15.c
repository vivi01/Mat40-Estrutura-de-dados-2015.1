#include <stdio.h> 
#include <math.h> 
#include <stdlib.h>
//10Fa�a um Programa que pergunte quanto voc� ganha por hora e o n�mero de horas trabalhadas
// no m�s. Calcule e mostre o total do seu sal�rio no referido m�s
float CalculaSalario(float salario, float aumento);

int main()
{
	float sal, aumento, vlrSalario, vlrAumento;
	printf("Informe o valor do seu salario:\n ");
	scanf("%f", &sal);
	printf("Informe o valor do aumento:\n ");
	scanf("%f", &aumento);
	vlrAumento = sal*aumento;
	vlrSalario  = CalculaSalario(sal,aumento);
	printf("O valor do aumento eh %.2f \n", vlrAumento);
	printf("O valor do seu novo salario eh %.2f", vlrSalario);	
}
float CalculaSalario(float salario,float aumento)
{
   	float valorNovoSalario, valorAumento;
   	valorAumento = salario*aumento;
	valorNovoSalario = salario + valorAumento;
	return valorNovoSalario;
}
