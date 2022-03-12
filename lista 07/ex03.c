/*Crie  uma  estrutura,  com  o  nome  Dieta,  para  armazenar  em  uma  lista  encadeada 
o  nome  de uma comida, o  peso  de  uma  porção  e o  número  de calorias. 
Escreva  um  programa  semelhante  a questão 2.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>

struct dieta{
  char nome[30];
  float peso, calorias;
};

struct no {
  struct dieta die;
  struct no *prox;
};

int main() {
  int opcao;
  struct no *novo,*imprimir, *lista=NULL;

        novo = malloc(sizeof(struct no));
        printf("Digite o nome da comida:\n");
        fflush(stdin);
        fgets(novo->die.nome,30,stdin);
        printf("Digite o peso:\n");
        scanf("%f", &novo->die.peso);
        printf("Digite as calorias:\n");
        scanf("%f", &novo->die.calorias);
        system("cls");
        novo->prox = lista;
        lista = novo;
        imprimir = lista;
        while(imprimir != NULL){
        printf("\ndados informados\n");
        printf("Nome: %s\n", imprimir->die.nome);
        printf("Peso: %.2f\n", imprimir->die.peso);
        printf("Calorias: %.2f\n", imprimir->die.calorias);
        imprimir = imprimir->prox;
        }
        system("cls");
  return 0;
}