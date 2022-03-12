/*Faça um algoritmo que leia um vetor de até 80 elementos. Após a leitura de todos os dados, leia 
um número e verifique se existem elementos no vetor iguais ao número lido. Se existirem, 
escrever, em uma tela limpa, quantas vezes eles aparecem e quais as posições em que eles estão 
armazenados no vetor
*/
#include <stdio.h>
int main (){

int elementos[3],i=0;
int j, cont=0;

for (i=0; i < 3; i++)
{
    printf("digite o elemento:");
    scanf("%d", &elementos[i]);
}
for (i=0; i < 3; i++)
{
    for (j=0; j < 3; j++)
{
        if (i!=j){
            if(elementos[i]== elementos[j]){
             cont++;   
            }  
        }
    }
}
printf ("os elementos repetidos sao:%d\n", cont++);

return 0;
}
