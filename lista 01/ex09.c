/*
Uma grande empresa deseja saber quais os três empregados mais recentes. Fazer um algoritmo 
para ler um número indeterminado de informações (máximo de 50) contendo a matrícula 
funcional do empregado e o número de meses de trabalho deste empregado. Mostre os três 
empregados mais recentes. Não existem dois empregados admitidos no mesmo mês e a 
matrícula igual a zero ‘0’ encerra a leitura.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    char matricula[3][50];
    int mes[50], contador=0;
    do{
        printf("Digite o numero de matricula:\n");
        scanf("%s", &matricula[contador]);
        printf("Digite a quantidade de meses:\n");
        scanf("%d", &mes[contador]);
        contador ++ ;
    }while(matricula[contador - 1] != 0 && contador - 1 < 50);
return 0;
}