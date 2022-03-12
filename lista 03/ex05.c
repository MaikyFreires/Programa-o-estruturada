/*A identificação dos nomes de passageiros nas companhias de transporte aéreo é descrita obedecendo
uma padronização, onde se deve primeiro escrever o último sobrenome e em seguida o primeiro nome,
separando ambos por uma barra ‘/’. Por exemplo: Edson Arantes do Nascimento teria o seu nome escrito na
passagem como: Nascimento/Edson. Faça um programa que leia um nome e apresente-o na formatação dos
transportes aéreos.
*/ 
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h> 
#include <string.h>
int main (){
int opcao=0;
char nome[50], ultimoNome[50] ;
do {
printf ("digite o seu nome:\n");
scanf ("%s", &nome);
printf ("digite o seu ultimo nome:\n");
scanf ("%s", &ultimoNome);
printf("nome = %s\\%s\n", ultimoNome, nome);
do{
printf ("voce deseja adicionar mais algum usuario?1-sim 2-nao\n");
scanf ("%d", &opcao);
}while (opcao < 1 || opcao > 2);
} while (opcao == 1); 
}