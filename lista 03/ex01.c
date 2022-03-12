/*Leia o nome completo de 2 pessoas e apresente o primeiro nome somente em letras maiúsculas e na linha
seguinte, com uma tabulação, o segundo nome em letras minúsculas, solicitando outros nomes caso o
usuário deseje. Somente devem ser usadas funções do padrão ANSI da linguagem C.
*/
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h> 
int main (){
int i, opcao =0;
char nome[50],maiscula[50], minuscula[50],sobrenome[50];
do {
printf("digite o seu nome:\n");
scanf ("%s", &nome);
printf ("digite o seu sobrenome:\n");
scanf("%s", &sobrenome);
for (i =0; i < 50; i++){
maiscula [i] = toupper (nome[i]); 
minuscula [i] = tolower (sobrenome[i]);   
}
printf ("seu nome:%s\n", maiscula);
printf ("seu sobrenome:%s\n",minuscula);
do{
printf ("\nvoce quer adicionar mais algum nome?\n1-sim\n2-nao \n");
scanf ("%d", &opcao);
}while (opcao < 1 || opcao > 2);
}while (opcao == 1);
}