/*Considerando  o  conjunto  dedados  abaixo  para  criação  daestrutura, 
crie um programa  em  C que  leia o preço, o nome e  as baixas de todos os dias de  todos os produtos
e  armazene em uma lista  encadeada  simples,  após  percorra  a  estrutura  de  dados  e  verifique
qual  foi  o  produto  que teve mais baixa, ou seja, que foi mais vendido. Ao final, 
mostre o nome e quantas unidades deste produto  foram  vendidas.
A  estrutura  deve  conter:  código,  nome,  preço,  baixa  como  uma  matriz 4X6,
onde o 4 representa as semanas e o 6 cada dia da semana (segunda a sábad
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct produtos{
  char nomeProduto[30];
  float precoProduto;
  int baixas;
};

struct no{
  struct produtos prod[4][6];
  struct no *prox;
};
void incluir(struct no **lista, struct no *novo){
  novo = malloc (sizeof (struct no));

  for( int i=0; i<4; i++){
    for (int j=0; j<6; j++){
      switch (j) {
        case 0: printf("Segunda");
        break;
        case 1: printf("Terca");
        break;
        case 2: printf("Quarta");
        break;
        case 3: printf("Quinta");
        break;
        case 4: printf("Sexta");
        break;
        case 5: printf("Sabado");
        break;
      }
      printf("\n Digite o nome do produto:\n");
      fflush(stdin);
      fgets(novo->prod[i][j].nomeProduto, 30,stdin);
      printf("Digite o preco do produto:\n");
      scanf("%f", &novo->prod[i][j].precoProduto);
      printf("Digite as baixas: ");
      scanf("%d", &novo->prod[i][j].baixas);
    }
  }
  novo->prox = *lista;
  *lista = novo;
}
int main (){
  struct no *novo, *lista, *aux;
  int verificar;
  char produto[30];
  verificar=0;

  incluir(&lista,novo);
  aux=lista;

  for( int i=0; i<4; i++){
    for (int j=0; j<6; j++){
      if ((aux->prod[i][j].baixas) > verificar) {
          verificar=aux->prod[i][j].baixas;
        strcpy(produto, aux->prod[i][j].nomeProduto);
      }
    }
  }
  printf("O produto com mais baixa foi: %s\n com %d baixas", produto, verificar);

  return 0;
}