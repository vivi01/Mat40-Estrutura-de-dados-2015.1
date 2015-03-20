#include <stdio.h> 
#include <math.h> 

float AreaTriangulo(int base, int altura);
int main()
{
        int base,altura;
        float areaTriang;

        printf("Informe o valor da base do triangulo: ");
        scanf("%d", &base);
        printf("Informe o valor da altura do triangulo: ");
        scanf("%d", &altura);
        areaTriang  = AreaTriangulo(base,altura);
        printf("A area do triangulo eh %.2f", areaTriang);
}

float AreaTriangulo(int base, int altura)
{
	float valorArea;
	valorArea  = (base*altura)/2;
	return valorArea;
}

