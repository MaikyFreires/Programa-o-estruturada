/*
Faça um programa  em  C que armazene  em  um  vetor 3  valores, 
e  imprima  os  valores utilizando notação deponteiro
*/
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h> 
#include <string.h>

int main(){
  int numero[3]={10,15,13};
  int *ponteiro=numero;

  for (int i = 0; i < 3; i++) {
    printf("%d\n", *ponteiro);
    ponteiro++;
  }

  return 0;
}