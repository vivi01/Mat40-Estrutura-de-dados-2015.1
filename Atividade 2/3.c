#include <stdio.h>
#include <stdlib.h>

int MaiorValor(int a,int b);
void main(int argc, char *argv[])
{
	int x, y, maior;
	printf("Digite dois numeros: \n");
	scanf("%d%d",& x,&y);
	maior = MaiorValor(x,y);
	printf("O maior numero eh %d: \n", maior);

}
int MaiorValor(int a,int b)
{
	if(a>b)
	return a;
	else
	return b;
}

