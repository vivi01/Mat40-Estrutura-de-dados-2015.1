#include <stdio.h>
#include <stdlib.h>

int ParImpar(int x);
int main() 
{
	int x,resultado;
	printf("Digite um numero: \n");
	scanf("%d",&x);	
    resultado = ParImpar(x);
	if(resultado ==1)	
	printf("O numero digitado eh PAR");
	else
		printf("O numero digitado eh IMPAR");

	return 0;
}
	
int ParImpar(int x)
{
	if (x%2 == 0)
	return 1;
	else
	return 0;

 }



