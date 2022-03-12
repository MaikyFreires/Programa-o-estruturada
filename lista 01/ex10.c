/*Elabore um algoritmo que leia um conjunto de valores inteiros correspondentes a até 80 
notas, variando de 0 a 10, dos alunos de uma turma (vários alunos). Calcule a frequência de 
cada nota e apresente uma tabela contendo os valores das notas e suas respectivas frequências
*/
#include <stdio.h>
int main (){
int notas [4], alunos, i;
for (i=0; i < 4; i++)
{
    printf ("digite a nota do %d aluno (0 a 10):\n", i); 
    scanf ("%d", &notas[i]);

}
    return 0;
}