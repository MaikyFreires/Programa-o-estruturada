/*Considerando o conjunto de dados abaixo para criação da estrutura, 
crie um programa em C que leia o preço, o nome e as baixas de todos
os dias de todos os produtos, após percorra a estrutura de dados e
verifique qual foi o produto que teve mais baixa, ou seja, que  foi  mais  vendido.
Ao  final,  mostre  o  nome  e  quantas  unidades  deste  produto  foram vendidas.
A  estrutura  deve  conter:  código,  nome,preço,  baixa  como  uma  matriz4X6, 
onde o 4 representa as semanas e o 6 cada dia da semana (segunda a sábado)*/

#include <stdio.h>
#include <stdlib.h>

struct produtos{
  char nomeP[20];
  float precoP;
  int baixasP;
};

int main(void) {
  int vendas[4][6],i=0, maior, total=0;
  char opcao;
  struct produtos dados[10];

  do {
    printf("escolha uma opcao:\n1-cadastrar:\n2-pausar:\n");
    fflush(stdin);
    scanf("%s", &opcao);
    system("cls");
    if (opcao=='1') {
      printf("digite o nome do produto:\n");
      fflush(stdin);
      fgets (dados[i].nomeP,20,stdin);
      printf("digite o preco do produto:\n");
      scanf("%f", &dados[i].precoP);

      for( int y=0; y<4; y++){
        for(int x=0; x<6; x++){
          printf("\ndias da semana");
          switch (x) {
            case 0:
              printf(" Segunda-feira");
            break;
            case 1:
              printf(" Terca-feira");
            break;
            case 2:
              printf(" Quarta-feira");
            break;
            case 3:
              printf(" Quinta-feira");
            break;
            case 4:
              printf(" Sexta-feira");
            break;
            case 5:
              printf(" Sabado");
            break;
          }
          printf(" Quantidade de baixas:\n");
          scanf("%d", &vendas[y][x]);
          total= total+vendas[y][x];
        }
        printf("\n\n");
      }
      dados[i].baixasP=total;
      printf("%d\n", dados[i].baixasP);
      i++;
    }
  } while(opcao!='2');

  maior = 0;
  for (int i = 0; i < i; i++) {
    if (dados[i].baixasP > maior) {
      maior=dados[i].baixasP;
    }
  }

  for (int i = 0; i < i; i++) {
    if (dados[i].baixasP==maior) {
      printf("aqui estão os produto com mais baixa:\n");
      printf("Nome:%s\n", dados[i].nomeP);
      printf("Preco:%f\n", dados[i].precoP);
      printf("Quantidade: %d\n", dados[i].baixasP);
    }
  }

  return 0;
}