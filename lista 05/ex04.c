/*Crie  uma  estrutura,  com  o  nome  Dieta,  para  armazenar  o  nome  de  uma  comida,  
o peso de uma porção e o número de calorias. Escreva um programa semelhante a questão 3.
*/

#include <stdio.h>
#include <stdlib.h>


struct dieta {
  char nomeComida[25];
  float peso, calorias;
};

struct dieta informacoes(struct dieta dados);

int main() {
  int cont=0;
  char opcao;
  struct dieta dados[10][4];

  do {
    dados[1][cont]=informacoes(dados[1][cont]);
    printf("\nDeseja continuar? \n1- sim\n2-nao\n");
    fflush(stdin);
    scanf("%d", &opcao);
    system("cls");
    cont++;
  } while(opcao!=2);

  for(int i=0; i<cont; i++){
    printf("Nome da comida: %s\n", dados[1][i].nomeComida);
    printf("Peso:%f\n", dados[1][i].peso);
    printf("Calorias:%f\n\n", dados[1][i].calorias);
  }
  return 0;
}

struct dieta informacoes(struct dieta dados){
  printf("Digite o nome da comida:\n");
  fflush(stdin);
  fgets(dados.nomeComida,25,stdin);
  printf("Digite o peso:\n");
  scanf("%f", &dados.peso);
  printf("Digite as calorias:\n");
  scanf("%f", &dados.calorias);
  return dados;
}