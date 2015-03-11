#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int MaiorValor(int a,int b);
int MaiorValor3(int x,int c);
int MaiorValor4(int y,int c);

void main(int argc, char *argv[])
 {
	MaiorValor(12,10);
	MaiorValor3(MaiorValor(4,80),70);
	MaiorValor3(MaiorValor3(12,50),20);


}
int MaiorValor(int a,int b)
{
	if(a>b)
	return a;
	else
	return b;
}
int MaiorValor3(int x,int c)
{
	if(x>c)
	return x;
	else
	return c;
}
int MaiorValor4(int y,int c)
{
	if(y>c)
	return y;
	else
	return c;
}

