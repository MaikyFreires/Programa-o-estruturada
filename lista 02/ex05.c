/*Faça um algoritmo que classifique o tamanho de uma organização populacional respeitando a 
escala a seguir:
Apresente por meio de um sub-algoritmo o nome e a classificação para a cidade informada, 
devendo a classificação ser obtida por um outro sub-algoritmo. As cidades deverão ser 
classificadas enquanto o usuário desejar.
*/

#include <stdio.h>
int classificacaoRegiao ( int classificacao);
int main (){ 
int classificacao, resultado;
    printf ("digite a estimativa de pessoas que existe nessa regiao:\n");
    scanf ("%d", & classificacao);
    classificacaoRegiao(classificacao);
return 0;

}
int classificacaoRegiao ( int classificacao){
int i;
if ( classificacao <= 5000)
    printf ("vila\n");
else if (classificacao <= 15000)
    printf ("distrito\n");
else if (classificacao <= 1000000)
    printf ("cidade\n");
else if (classificacao >= 10000001)
    printf ("metropole\n");
return classificacao;
}
