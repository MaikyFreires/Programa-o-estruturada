/*Elabore um programa que faça o armazenamento de um texto. Em uma janela limpa o texto deverá ser
apresentada com todas as palavras tendo a sua primeira letra em maiúscula e o restante das letras em
minúsculo. Após a apresentação de todo o texto centralize a linha na horizontal e escreva que este texto
possui tantas palavras.
*/

#include <ctype.h>
#include <stdlib.h>
#include <stdio.h> 
#include <string.h>

int main (){
  char texto[100];
  int tamanho, quantidadeP=1;
  system ("cls");
  printf("Digite o texto: \n");
  fflush(stdin);
  fgets (texto, 100,stdin);
  tamanho=strlen(texto);
  texto[0]=toupper(texto[0]);
  for (int i = 1; i < tamanho; i++) {
    texto[i]=tolower(texto[i]);
  }
  for(int k=0;texto[k]!= '\0'; k++ ) {
   if((texto[k] == ' ') && (texto[k+1] != ' ')) {
      quantidadeP++;
   }
  }
  system ("cls");
  printf("\n\n%s", texto);
  printf("\na quantidade de palavras: %d\n", quantidadeP);
  return 0;
}

