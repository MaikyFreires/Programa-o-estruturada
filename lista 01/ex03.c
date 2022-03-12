/*Faça um algoritmo que calcule e escreva o somatório dos valores armazenados numa variável 
composta unidimensional, chamada dados, de até 100 elementos numéricos a serem lidos.
*/
#include<stdio.h>
#include<locale.h>

int main (){

        setlocale(LC_ALL, "Portuguese");

int i, numero; 

do{
    printf ("quantos numero voce deseja somar:");
    scanf("%d", &numero);

if(numero > 100)

    printf ("voce antigiu o numero maximo a ser lido, digite novamente!!\n");

}while(numero > 100);

int valor[numero], soma=0; 

for (i=0; i < numero; i++)
{
    printf("digite o %d valor:", i);
    scanf("%d", &valor[i]);   
}
for (i=0; i < numero; i++)
{
soma = soma + valor[i];
}
    printf ("a soma dos valores e %d\n", soma);

for (i=0; i < numero; i++)
{
    printf ("o %d valor digitado e %d\n", i, valor[i]);
}
return 0;
}