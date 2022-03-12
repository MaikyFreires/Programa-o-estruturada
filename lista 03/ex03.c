/*Faça um programa que solicite o primeiro e o último nome de 5 pessoas. Assim que a pessoa informar os
dois nomes, apresente em tela o tamanho de cada um deles e se for possível concatene-os em uma única
variável fazendo o uso da função de concatenação de strings.*/

#include <ctype.h>
#include <stdlib.h>
#include <stdio.h> 
#include <string.h>
int main (){
int opcao=0;
char nome[50], ultimoNome[50];
do {
printf ("digite o seu nome:\n");
scanf ("%s", &nome);
printf ("digite o seu ultimo nome:\n");
scanf ("%s", &ultimoNome);
strcat(nome, ultimoNome);
printf("nome = %s\n", nome);
do{
printf ("voce deseja adicionar mais algum usuario?1-sim 2-nao\n");
scanf ("%d", &opcao);
}while (opcao < 1 || opcao > 2);
} while (opcao == 1); 
}