/*Crie  uma  estrutura  para  descrever  restaurantes.  Os  membros  devem  armazenar  o  nome, 
o endereço,  o  preço  médio  e  o  tipo  de  comida.  
Crie  uma  lista  simples  encadeada  e  escreva  um programa  que  utilize  uma  função  para 
solicitar  os  dados  de  um  elemento  da  lista  e  outra  para listar todos os dados
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct restaurante {
  char nome[30], endereco[30], tipoComida[20];
  float precoMedio;
};

struct No{
  struct restaurante rest;
  struct No *prox;
};

int main() {
  struct No *novo, *imprimir, *lista=NULL;

        novo = malloc(sizeof(struct No));
        printf("Digite o nome do restaurante:\n");
        fflush(stdin);
        fgets(novo->rest.nome,30,stdin);
        printf("Digite o endereco:\n");
        fgets(novo->rest.endereco,30,stdin);
        printf("Digite o preco medio:\n");
        scanf("%f", &novo->rest.precoMedio);
        printf("Digite o tipo de comida:\n");
        fflush(stdin);
        fgets(novo->rest.tipoComida,20,stdin);
        system("cls");
        novo->prox = lista;
        lista = novo;

        imprimir = lista;
        while(imprimir != NULL){
          printf("dados informados\n");
          printf("Nome: %s\n", imprimir->rest.nome);
          printf("Endereco: %s\n", imprimir->rest.endereco);
          printf("Preco medio: %f\n", imprimir->rest.precoMedio);
          printf("Tipo de comida: %s\n", imprimir->rest.tipoComida);
          imprimir = imprimir->prox;
        }
        system("cls");

  return 0;
}