#include <stdio.h>
#include <stdlib.h>
int Soma(int x, int y, int z, int w);

void main(int argc, char *argv[]) 
{
	int x, y,z,w;
	printf("Digite quatro numeros : ");
	scanf("%d%d%d%d",&x,&y,&z,&w);
    Soma(x,y,z,w);	
}
int Soma(int x, int y, int z, int w)
{
	int total = x + y + z + w;
	return total;
}

