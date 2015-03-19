#include <stdio.h>
#include <stdlib.h>

float Media(float x, float y,float z);
char Conceitos (float x); 
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
	conceito = Conceitos(resultado);
	printf("A media eh %.2f \n",resultado);
   	printf("O conceito eh %c \n",conceito);
}

float Media(float x, float y,float z)
{
	float mediaTotal;
	int p1 = 2;
	int p2 = 3;
	int p3 = 5;
	mediaTotal = (x*p1 + y*p2 + z*p3 )/(p1+p2+p3);
	return mediaTotal;
}
char Conceitos (float x)
{
	char conceito;
	if (x>=8)
	{
		 conceito = 'A';
	} 
	else if (x>=7 && x<8)
    {
    	    conceito= 'B';
	}
   else if (x>=6 && x<7)
	       {
	       	    conceito='C';
		   }
    else if (x>=5 && x<6)
    {
    	    conceito='D';
	}
    else if (x<5)
    {
	    conceito= 'E';
	}
	return conceito;
}


