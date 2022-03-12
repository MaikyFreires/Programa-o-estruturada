/*Crie umafunção  que  aceite  como  parâmetro  um vetde  inteiros  com  N  valores,  
e determina o maior elemento do vet e o número de vezes que este elemento ocorreu no vet. 
Por exemplo, para um vet com os seguintes elementos: 3, 5, 12, 6, 7, 27,9, 16, 27,  a  função 
deve  retorna  para  o  programa  que  a  chamou  o  valor  27  e  o  número  2
(indicando que o número 27 ocorreu 2 vezes). A função deve ser do tipo void.
*/
//editar

#include <stdio.h>

void validar(int *verifica, int vet);
int main() {
  int vet, i;
  printf("Digite a quantidade de elementos: ");
  fflush(stdin);
  scanf("%d", &vet);
  int numeros[vet];
  for (i = 0; i < vet; i++){
    printf("Digite o numero do elemento:\n");
    fflush(stdin);
    scanf("%i", &numeros[i]);
  }
  validar(numeros, vet);
  return 0;
}

void validar(int *verifica, int vet){
  int maiorN, i,quantidade=1;
  maiorN=verifica[0];

  for ( i = 1; i < vet; i++) {
    if(maiorN >= verifica[i]){
      if(maiorN==verifica[i]){
      quantidade++;
      }
    }
    else{
      maiorN=verifica[i];
      quantidade=1;
    }
  }
  printf("\nmaior numero e: %d, quantidade: %d\n", maiorN, quantidade);
}