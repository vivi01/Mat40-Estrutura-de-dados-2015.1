#include <stdio.h>
#include <stdlib.h>

float Media(float x, float y,float z);

void main() 
{
	float x,y,z,w, resultado;
	printf("Digite a primeira nota: \n");
	scanf("%f",&x);
	printf("Digite a segunda nota: \n");
	scanf("%f",&y);
	printf("Digite a terceira nota:\n");
	scanf("%f",&z);
	resultado = Media(x,y,z);	
	printf("A media eh %.2f",resultado);

}


float Media(float x, float y,float z)
{
	float mediaTotal;
	mediaTotal = (x + y + z )/3;
	return mediaTotal;
}
