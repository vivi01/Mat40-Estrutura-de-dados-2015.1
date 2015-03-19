#include <stdio.h> 
#include <math.h> 
#include <stdlib.h>

float CalculaSalario(float salario);

int main()
{
	float sal,vlrSalario;
	printf("Informe o valor do seu salario:\n ");
	scanf("%f", &sal);
	vlrSalario  = CalculaSalario(sal);
	printf("O valor do seu novo salario eh %.2f", vlrSalario);	
}
float CalculaSalario(float salario)
{
   	float valorNovoSalario, gratificacao, imposto;
   	gratificacao = salario*0.05;
   	imposto = salario*0.07;
   	
	valorNovoSalario = salario + gratificacao - imposto;
	return valorNovoSalario;
}
