/*Desenvolvaum programa em C que contenha um vetor contendo 5 elementos inteiros. 
Utilizando apenas notação de ponteiros, leia esse vetordo teclado e 
imprima o endereço das posições contendo valores pares
*/

#include <ctype.h>
#include <stdlib.h>
#include <stdio.h> 
#include <string.h>

void valorPar(int *pares);

int main() {
  int i, elementos[5];

  for (i=0; i<5; i++){
    printf ("digite o %d elemento:\n", i);
    scanf("%d", &elementos[i]);
  }
  valorPar(elementos);
  return 0;
}

void valorPar(int *pares){
  float validar, conta;
  int validar2, contador;

  for (contador=0; contador<5; contador++){
    validar=pares[contador]*0.5;
    validar2=pares[contador]*0.5;
    conta=validar-validar2;
    if (conta == 0) {
      printf("%d\n", pares);
    }
  }
}