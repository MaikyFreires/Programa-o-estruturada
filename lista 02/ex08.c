//elabore  um  algoritmo  que  armazene o  peso  de  3  pessoas  e  depois organize-os 
//de  forma  que os valores fiquem armazenados em ordem crescente de peso. 
//Esta ordenação deverá ser feita e apresentada por um sub-algoritmo
#include <stdio.h>
void ordenacao(float *pessoaPeso);
int main(void) {
  float pessoaPeso[3];
  for(int i=0; i<3; i++){
    printf("Digite o peso %d pessoa:\n", i);
    scanf("%f", &pessoaPeso[i]);
  }
  ordenacao(pessoaPeso);
  for(int j=0; j<3; j++){
    printf("pessoaPeso: %.2f\n", pessoaPeso[j]);
  }
  return 0;
}
void ordenacao(float *pessoaPeso){
float resultado;
for (int contador=0; contador<3; contador++){
for(int y=0; y<3; y++){
if (pessoaPeso[y]>pessoaPeso[y]) {
resultado=pessoaPeso[y];
pessoaPeso[y]=pessoaPeso[y];
pessoaPeso[y]=resultado;
}
    }
        }
            }

