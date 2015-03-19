#include <stdio.h>
#include <stdlib.h>

float Media(float x, float y,float z, int p1, int p2, int p3);

void main() 
{
	float x,y,z,w, resultado;
	int p1,p2,p3;
	printf("Digite a primeira nota e seu peso: \n");
	scanf("%f%d",&x,&p1);	
	printf("Digite a segunda nota e seu peso: \n");
	scanf("%f%d",&y,&p2);
	printf("Digite a terceira nota: e seu peso\n");
	scanf("%f%d",&z,&p3);
	resultado = Media(x,y,z,p1,p2,p3);	
	printf("A media eh %.2f",resultado);

}


float Media(float x, float y,float z, int p1, int p2, int p3)
{
	float mediaTotal;
	mediaTotal = (x*p1 + y*p2 + z*p3 )/3;
	return mediaTotal;
}
