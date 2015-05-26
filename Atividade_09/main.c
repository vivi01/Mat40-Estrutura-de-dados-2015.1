#include<stdio.h>
#include "calc.h"

main()
{
	float a,b;
	char op;
	printf("**** MENU **** \n");
	printf("Digite dois números: \n ");
	scanf("%f%f",&a,&b);
	printf("Escolha a operacao desejada: \n" );
	printf("+ \n" );
	printf("- \n" );
	printf("* \n" );
	printf("/ \n" );  
	scanf("%s",&op);	  
  Calc* c;
	c=cria_calc("%.2f\n");
	operando(c,a);
  operando(c,b);
  operador(c,op);    
}

