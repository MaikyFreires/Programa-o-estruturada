
//Escrever um programa que declare um vetor de reais e leia as notas de 30 alunos
//Altere o algoritmo anterior considerando que não se conhece quantos alunos esta turma tem
//(menos que 50). O número de aluno será informado pelo usuário.

//biblioteca printf e scanf
#include <stdio.h>
#include <stdlib.h>

// inicio de programa
int main()

{   
//variavéis declaradas
    int i;
    int alunos;
    
//repetição caso antiga o limite de 50 alunos 
    do{
        printf("digite a quantidade de alunos:");
        scanf ("%d", &alunos);
    if (alunos > 50){
        printf ("voce antigiu a quantidade maxima de alunos, digite novamente:\n");
    }
    

    }while  (alunos > 50);
   
//variavéis 
    float notas [alunos];
//repetição da quantidade de alunos digitada pelo usuario mais a nota de cada um
    for (i = 0; i < alunos; i++)
    {
        printf("Digite a nota do %d aluno: ", i);
        scanf("%f", &notas[i]);
    }
// repetição das notas de cada aluno
    for (i = 0; i < alunos; i++)
    {
        printf("A nota do %d aluno e: %.2f\n", i, notas[i]);
    }
    
    return 0;

}