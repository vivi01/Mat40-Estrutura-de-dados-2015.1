#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<"pilha.h">
#include<"calc.h">
//Calculadora posfixa usando pilha
struct calc {
char f[21]; 
Pilha* p; 
};

Calc* cria_calc(char* k)
{
    Calc* c=(Calc*)malloc(sizeof(Calc));    
    strcpy(c->f,k);
    c->p=cria();
    return c;
}
void operando (Calc* c, float v)
{
    insere(c->p,v);
    printf(c->f,v);
}

void operador(Calc* c, char op)
{
	float b=removePilha(c->p);
	float a=removePilha(c->p);
	float res;
	switch(op)
	{
		case '+':  res = a + b;
		break;
		case '-': res = a - b;
		break;
		case '*': res = a * b;
		break;
		case '/': res = a / b;
		break;
	} 
	printf("O resultado eh:\n");
	printf("%.2f",res); 
	insere(c->p,res);
}


