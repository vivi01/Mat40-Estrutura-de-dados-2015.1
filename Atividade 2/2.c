#include <stdio.h>
#include <stdlib.h>

float Media(float x, float y,float z);
float Exames (float x); 
void main() 
{
	float x,y,z,w, resultado;
	char conceito;
	printf("Digite a nota do trabalho de laboratorio: \n");
	scanf("%f",&x);	
	printf("Digite a nota da avaliacao semestral: \n");
	scanf("%f",&y);
	printf("Digite a nota do exame final:\n");
	scanf("%f",&z);
	resultado = Media(x,y,z);	
	printf("A media eh %.2f \n",resultado);
	if(resultado<=3)
	{
	  printf("Voce foi Reprovado");
	}
	else if(resultado>3 && resultado<7)
	{
	  float vlrFinal;
	  vlrFinal = Exames(resultado);	  
	  printf("Voce vai precisar fazer o Exame e precisara tirar %.2f", vlrFinal);
	}
	else if(resultado>=7)
	{
	  printf("Voce foi aprovado");
	  	}
}
	
float Media(float x, float y,float z)
{
	float mediaTotal;

	mediaTotal = (x + y + z )/(3);
	return mediaTotal;
}
float Exames (float x)
{
	float notaFinal;
	notaFinal = 6.00 - x;
	return notaFinal;
}


