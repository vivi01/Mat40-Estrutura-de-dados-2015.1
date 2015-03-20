#include <stdio.h> 
#include <math.h> 

#define  PI  3.14159
float AreaCirculo(int raio);
int main()
{
        int raio;
        float areaCirc;

        printf("Informe o valor do raio: ");
        scanf("%d", &raio);
        areaCirc  = AreaCirculo(raio);
        printf("A area da circunferencia eh %.2f", areaCirc);
}

float AreaCirculo(int raio)
{
	float valorArea;
	valorArea  = PI * pow(raio, 2);
	return valorArea;
	
}

