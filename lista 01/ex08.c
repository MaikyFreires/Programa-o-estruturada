/*Faça um algoritmo que leia a idade de até 100 pessoas e apresente a média entre todas, além 
de identificar a mais velha e a posição em que ela se encontra no vetor. A idade mais velha 
pode aparecer em mais de uma posição.
*/
#include <stdio.h>
int main (){
int pessoas[3]={0}, soma=0, i, posicao, pessoaVelha=0,x; 
float media;
for (i=0; i<3; i++)
{
    printf ("digite a idade da %d pessoa:", i);
    scanf ("%d", &pessoas[i]);
    soma = soma + pessoas[i];
}
    media = soma/3.0;
    printf("a media da idade das pessoa e %.1f\n", media);
for (i=0; i<3; i++)
{
    if (pessoas[i] == x){
        pessoaVelha = 1;
        posicao = i;
    }
}
    if (pessoaVelha = 0){
    printf("numero encontrado");
    }else 
    printf ("Numero encontrado na posicao: ", posicao);
return 0;
}