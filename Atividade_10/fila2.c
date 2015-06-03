//Função para criar uma fila
Fila* cria (void)
{
  Fila* f = (Fila*) malloc(sizeof(Fila));
  f->ini = NULL;
	 f->fim = NULL;
  return f;
}
// função para inserir na fila
void insere (Fila* f, float v)
{
	No* novo = (No*) malloc(sizeof(No));
	novo->info = v;
	novo->prox = NULL;
	if (!vazia(f)) 
	  f->fim->prox = novo;
	else
	f->ini = novo;
	f->fim = novo;
}
// função para remover o primeiro elemento da fila
float retira (Fila* f)
{
	No* l;
  float v;
  if (vazia(f))
  {
    printf("Fila vazia.\n");
    exit(1); /* aborta programa */
  }
  l = f->ini;
  v = l->info;
  f->ini = l->prox;
  if (f->ini == NULL) 
    f->fim = NULL;
  free(l);
	return v;
}

// função para verificar se a fila esta vazia
int vazia (Fila* f)
{
  return (f->ini==NULL);
}
//função para desalocar a fila
void libera (Fila* f)
{
  No* q = f->ini;
  while (q!=NULL) 
  {
    No* t = q->prox;
    free(q);
    q = t;
  }
  free(f);
}
//função para imprimir
void imprime (Fila* f)
{
  No* q;
  for (q=f->ini; q!=NULL; q=q->prox)
  printf("%.2f\n",q->info);
}

