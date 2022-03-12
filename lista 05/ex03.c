/*
Crie  uma  estrutura  para  descrever  restaurantes. 
Os  membros  devem  armazenar  o nome,  o  endereço, 
o  preço médio  e  o  tipo  de  comida.  Crie  uma  matriz  
de  estruturas  e escreva um programa que utilize uma função
para solicitar os dados de um elemento da matriz e outra para 
listar todos os dados.
*/ 
#include <stdio.h>
#include <stdlib.h>

struct restaurante {
  char nomeMembro[30], enderecoMembro[30], tipoComida[30];
  float precoMedio;
};

struct restaurante solicitaDados(struct restaurante dados);

int main() {
  struct restaurante dadosR[10][4];
  int continuar, contador=0;

  do {
    dadosR[1][contador]=solicitaDados(dadosR[1][contador]);
    printf("\nDeseja continuar? \n1 para sim\n2 para nao\n");
    fflush(stdin);
    scanf("%i", &continuar);
    system("cls");
    contador++;
  } while(continuar!=2);

  for(int i=0; i<contador; i++){
    printf("seu nome:%s\n", dadosR[1][i].nomeMembro);
    printf("seu endereco:%s\n", dadosR[1][i].enderecoMembro);
    printf("seu tipo de comida:%s\n", dadosR[1][i].tipoComida);
    printf("o preco medio e:%f\n\n", dadosR[1][i].precoMedio);
  }
  return 0;
}
struct restaurante solicitaDados(struct restaurante dados){
  printf("Digite o seu nome:\n");
  fflush(stdin);
  fgets(dados.nomeMembro,30,stdin);
  printf("Digite o seu endereco:\n");
  fgets(dados.enderecoMembro, 30,stdin);
  printf("Digite qual o tipo de comida:\n");
  fflush(stdin);
  fgets(dados.tipoComida, 30, stdin);
  printf("Digite o seu preco:\n");
  scanf("%f", &dados.precoMedio);
  return dados;
}

