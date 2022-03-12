/*Faça um algoritmo que leia até 30 letras e as escreva na ordem inversa (ou contrária) da que 
foram lidas.
*/
//bibliotecas
#include <stdio.h>
#include<string.h>

int main (){
//variaveis para o primeiro for
char quantidadeLetras[30];
int i=0;

for (i=0; i < 30; i++)
{
    printf ("digite a %d letra:\n", i);
    scanf ("%s", &quantidadeLetras[i]);
}
//variaveis para conversão do segundo for
int cont=0;
char invertida[30];
// strlen para retorna o tamanho da string

for (int i=strlen(quantidadeLetras)-1; i >=0; i--)
{
invertida[cont] = quantidadeLetras[i];    
cont +=1;
}
//finalização da string 
invertida[cont] = '\0';

    printf ("as letras digitadas sao: %s", invertida);

return 0;
}