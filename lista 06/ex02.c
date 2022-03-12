/*Crie um  programa  em  C que  receba  três  números do usuário depois  crie uma função que  receba  os 3 números  como parâmetros:  A, B e  C. Ordene de  tal forma  que, ao final da  função,  A  contenha  o  menor  número  e  C  o  maior.  
Imprima  os  três  números.  Obs: Utilize ponteiro para solucionar o problema
*/

#include <ctype.h>
#include <stdlib.h>
#include <stdio.h> 
#include <string.h>

int ordenar(int *ponteiro);
int main(){
int numeroUsuario[3], i;

for (i=0; i<3; i++){
printf("Digite o %d valor:", i);
scanf("%d", &numeroUsuario[i]);
}
ordenar(numeroUsuario);
  return 0;
}

int ordenar(int *ponteiro){
  int i, contador, aux;

  for(i=0; i<3-1; i++){
    for (contador=0; contador<3-1; contador++){
      if(ponteiro[contador+1]>ponteiro[contador]){
        aux = ponteiro[contador+1];
        ponteiro[contador+1]=ponteiro[contador];
        ponteiro[contador]=aux;
      }
    }
  }
  for (i=0; i<3; i++){
        printf("\n valor: %d\n", *ponteiro);
        ponteiro++;
    }

}
