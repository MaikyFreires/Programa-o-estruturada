/*Faça um programa que armazene uma frase a ser transmitida aos candidatos da próxima eleição com até
50 caracteres. Após o armazenamento da frase, solicite o primeiro nome do candidato e transforme-o todo
em maiúsculo, concatenando-o com a frase, além de dois pontos. O resultado deverá ser apresentado a
partir da linha 5. Após a apresentação o programa deverá ser encerrado imediatamente após 10 segundos
(ver função sleep).
*/

#include <ctype.h>
#include <stdlib.h>
#include <stdio.h> 
#include <string.h>
#include <windows.h>
int main (){
char frase[50], nome[30];
printf ("digite uma frase para transmitir ao candidato:\n");
scanf ("%s", &frase);
printf ("digite o primeiro nome do candidato:\n");
fflush(stdin);
scanf("%s", nome);
strcat (frase, nome);
printf("nome = %s;", frase);
sleep(1000);
printf ("encerrando");
}