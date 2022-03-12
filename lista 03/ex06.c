/*Elabore um programa que armazene o nome completo de uma pessoa com até 30 caracteres e o
apresente em letras maiúsculas centralizado em uma janela limpa. Na primeira coluna da linha 20 apresente
quantos caracteres possui este nome e na linha 23 pergunte se o usuário quer informar outro nome. Caso
deseje repita o processo até que o usuário não deseje mais ler nenhum nome e saia do programa
IMEDIATAMENTE (sem pressionar qualquer tecla).
*/
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h> 
#include <string.h>
#include <Windows.h>
int main (){
int i, tamanho, opcao = 1, k=0; 
char nomeCompleto[30], maiscula[30];
do {
printf ("digite seu nome completo:\n");
fflush(stdin);
fgets(nomeCompleto,30, stdin);
for (i =0; i < 30; i++){
maiscula[i] = toupper (nomeCompleto[i]);
tamanho = strlen (nomeCompleto);
} 
printf ("tamanho da string e %d\n",tamanho);
system ("pause");
system("cls");
printf ("%30s",maiscula);
system ("pause");
system("cls");
do{
printf ("\nvoce quer adicionar mais algum nome?\n1-sim\n2-nao \n");
scanf ("%d", &opcao);
if (opcao == 2){
while (k++ < 10) {
Sleep(1000);
printf (".");
}
}
}while (opcao < 1 || opcao > 2);

}while (opcao == 1);
}