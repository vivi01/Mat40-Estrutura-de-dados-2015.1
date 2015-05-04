#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct ponto{
	float x;
	float y;
};

void CapturaPonto(struct ponto* p);
void ImprimePonto(struct ponto* p);
float distancia (struct ponto *p, struct ponto *q);
int main()
{
	struct ponto* pont;
	CapturaPonto(&pont);
	ImprimePonto(&pont);
/*	printf("Digite as coordenadas do ponto \n");
  scanf("%f%f", &pont.x,&pont.y);
  printf("Os pontos digitados foram: %f%f", pont.x,pont.y);*/
  
  return 0;
}
void  CapturaPonto(struct ponto* p)
{	
	printf("Digite as coordenadas do ponto: \n");
  scanf("%.2f%.2f", &p->x,&p->y);
}
void ImprimePonto(struct ponto* p)
{
	  printf("Os pontos digitados foram: %.2f, %.2f", p->x,p->y);
}

float distancia (struct ponto *p, struct ponto *q)
{
	float d;
	
	d = sqrt(pow((q->x - p->x),2) + pow((q->y - p->y),2));
	return d;	
}

