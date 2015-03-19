#include <stdio.h> 
#include <math.h> 

float AreaQuadrado(int l);
int main()
{
        int l;
        float areaQuadr;

        printf("Informe o valor do lado do quadrado: ");
        scanf("%d", &l);
        areaQuadr  = AreaQuadrado(l);
        printf("Dobro da area eh %.2f", areaQuadr*2);
}

float AreaQuadrado(int l)
{
	float valorArea;
	valorArea  =  pow(l, 2);
	return valorArea;
	
}

