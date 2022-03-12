/*Desenvolva um  programa  em  C  utilizando  registro  que  permita  a  entrada  de  nome, endereço e telefone de 3 pessoas
e os imprima ao final*/

#include <ctype.h>
#include <stdlib.h>
#include <stdio.h> 
#include <string.h>

typedef struct 
{
char nome[50], endereco [50];
int telefone; 
}cadastro;

int main () {
cadastro pessoa[3];
for (int i = 0; i < 3; i++){
printf ("digite o seu nome completo:\n");
fflush (stdin);
fgets (pessoa[i].nome, 50,stdin);
printf ("digite o seu endereco:\n");
fflush (stdin);
fgets(pessoa[i].endereco, 50, stdin);
printf ("digite o seu telefone:\n");
fflush (stdin);
scanf ("%d", &pessoa[i].telefone);
}
system ("cls");
for (int i = 0; i <3; i++){
printf ("seu nome e:%s\nendereco:%s\ntelefone:%d\n", pessoa[i].nome, pessoa[i].endereco, pessoa[i].telefone);
}

}