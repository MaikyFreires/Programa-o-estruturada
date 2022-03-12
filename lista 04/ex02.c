/*Criar  um  registro  chamado  DadosAluno,  que armazene o  nome e  idade  de  um aluno. Na função main: criar uma variável que é uma estrutura DadosAluno; ler o nome e a idade de um aluno
e armazenar na variável criada; exibir na tela o nome do aluno e a idade do aluno.*/

#include <ctype.h>
#include <stdlib.h>
#include <stdio.h> 
#include <string.h>

struct dadosAlunos
{
    char nomeAluno[30];
    int idadeAluno;
};
int main (){
struct dadosAlunos dadosAluno;
printf ("digite o nome do aluno:\n");
fgets (dadosAluno.nomeAluno, 30, stdin);
printf ("digite a idade do aluno:\n");
scanf ("%d", &dadosAluno.idadeAluno);
printf ("o aluno %s tem %d anos", dadosAluno.nomeAluno, dadosAluno.idadeAluno);
}