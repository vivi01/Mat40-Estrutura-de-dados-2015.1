#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int MaiorValor(int a,int b);
int MaiorValor3(int x,int c);
int MaiorValor4(int y,int c);
int TestaFuncoesMaiorValor();

void main(int argc, char *argv[])
 {
//	MaiorValor(12,10);
//	MaiorValor3(MaiorValor(4,80),70);
//	MaiorValor4(MaiorValor3(12,50),20);
	TestaFuncoesMaiorValor();
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
int TestaFuncoesMaiorValor()
{
	int x = MaiorValor(20,40);
	int y= MaiorValor3(60,10);
	int z = MaiorValor(1,4);
	
	if((x=40) && (y=60) && (z=4))
	return 1;
	else
	return 0;
}





