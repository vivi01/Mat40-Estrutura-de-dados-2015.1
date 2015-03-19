#include <stdio.h> 
#include <math.h> 
#include <stdlib.h>
/* 11Faça um Programa que peça a temperatura em graus Farenheit, transforme e mostre a
 temperatura em graus Celsius. C=(5*(F 32)/9) */
 float ConverteFarenheitEmCelsius (float tempFarinheit);
 int main()
 {
 	float farnh, cels;
 	printf("Informe a temperatura em Farenheit para conversao: \n");
 	scanf("%f",&farnh);
 	cels = ConverteFarenheitEmCelsius(farnh);
 	printf("A temperatura em Celsius eh: %.2f",cels); 	
 }
  float ConverteFarenheitEmCelsius (float tempFarinheit)
  {
  	float celsius;
  	celsius = (5*(tempFarinheit*32)/9);
  	return celsius;
  }


