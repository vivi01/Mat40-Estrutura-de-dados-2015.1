#include <stdio.h>
#include <stdlib.h>

float MediaBimestral(float x, float y,float z, float w);

void main() 
{
	float x,y,z,w, resultado;
	printf("Digite a primeira nota: \n");
	scanf("%f",&x);
	printf("Digite a segunda nota: \n");
	scanf("%f",&y);
	printf("Digite a terceira nota:\n");
	scanf("%f",&z);
	printf("Digite a quarta nota:\n");
	scanf("%f",&w);
	resultado =MediaBimestral(x,y,z,w);	
	printf("A media bimestral eh %.2f",resultado);

}


float MediaBimestral(float x, float y,float z, float w)
{
	float mediaTotal;
	mediaTotal = (x + y + z + w)/4;
	return mediaTotal;
}
