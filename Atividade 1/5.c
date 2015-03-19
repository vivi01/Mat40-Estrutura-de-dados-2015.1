#include <stdio.h>
#include <stdlib.h>
int Soma(int x, int y);

void main(int argc, char *argv[]) 
{
	int x, y;
	printf("Digite dois numeros : ");
	scanf("%d%d",&x,&y);
    Soma(x,y);	
}
int Soma(int x, int y)
{
	int total = x + y;
	return total;
}

