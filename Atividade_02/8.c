#include <stdio.h>
#include <stdlib.h>

int Soma(int a, int b);
int Subtracao(int a, int b);
int Multiplicacao(int a, int b);
int Divisao(int a, int b);
int RaizQuadrada(int a);

int main() 
{
	int op, a,b;
	printf("****** MENU ******* \n");
	printf("1. Somar dois números.\n");
	printf("2. Subtrair dois números\n");
	printf("3. Multiplicar dois números\n");
	printf("4. Dividir dois números\n");
	printf("5. Raiz quadrada de um número\n");
	printf("Digite a opção desejada: \n");
	scanf("%d",&op);
	switch (op)
	{
		case 1:
			printf("Digite dois numeros: \n");
	        scanf("%d%d",&a,&b);
			Soma(a,b);
		break;
		case 2:
			printf("Digite dois numeros: \n");
	        scanf("%d%d",&a,&b);
    		Subtracao(a,b);
		break;
		case 3:
			printf("Digite dois numeros: \n");
	        scanf("%d%d",&a,&b);
			Multiplicacao(a,b);
		break;
		case 4:
			printf("Digite dois numeros: \n");
	        scanf("%d%d",&a,&b);
			Divisao(a,b);
		break;
		case 5:
			printf("Digite um numero: \n");
	        scanf("%d",&a);
			RaizQuadrada(a);
		break;		
	}
}
	
int Soma(int a, int b)
{
	int total;
	total = a + b;
	return total;
}
int Subtracao(int a, int b)
{
	int total2;
	total2 = a - b;
	return total2;
}
int Multiplicacao(int a, int b)
{
	int total3;
	total3 = a * b;
	return total3;
}
int Divisao(int a, int b)
{
	int total4;
	total4 = a / b;
	return total4;
}
int RaizQuadrada(int a)
{
	int total5;
	total5 = a * a;
	return total5;

}
