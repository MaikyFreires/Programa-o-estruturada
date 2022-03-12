/*Desenvolva um programa que declare um vetor de inteiros e um ponteiro para inteiros. 
Associe o ponteiro ao vetor. Agora, some mais um (+1) a cada posição do vetor usando o ponteiro (use *).
*/
#include <stdio.h>
int main (){
  int vet[3], *ponteiro, i;

  ponteiro =& vet;
  vet[0]=1;

  for(i=0; i<3; i++){
    *ponteiro=i;
  }

  for(i=0; i<3; i++){
    printf("%d\n", vet[i]);
  }
  return 0;
}
