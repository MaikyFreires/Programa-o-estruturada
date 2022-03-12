/*Desenvolva uma  estruturaem  Cconforme  o  modelo  abaixoe  após  crie as  funções solicitadas
a)Cadastrar os dados.
b)Apresentar todos os dados.
c)Exibira porcentagem de alunos aprovados e 
reprovados por turma, totalizados por série.
d)Exibir aporcentagem de alunos do sexo masculino e
do sexo feminino por turma, totalizados por série.
e)Apresentar a média das idades de cada uma das séries
*/

#include <stdio.h>
#include <stdlib.h>

struct aluno{
float media;
int serie;
char anoNascimento[10], turma, naturalidade[15],nome[20],nMatricula[10],sexo[10], aprovado[10];
};

struct aluno adicionar(struct aluno dadosA);
int main() {
  int i=0, opcao;
  struct aluno dadosA[10][1];

  do {
    dadosA[1][i]=adicionar(dadosA[1][i]);
    printf("\nDeseja continuar? \n1 para sim\n2 para nao\n");
    fflush(stdin);
    scanf("%d", &opcao);
    system("cls");
    i++;
  } while(opcao!=2);

  for(int j=0; j<i; j++){
    printf("Aluno Nome:%s\n", dadosA[1][j].nome);
    printf("Aluno Serie:%s\n", dadosA[1][j].nMatricula);
    printf("Aluno Turma:%c\n", dadosA[1][j].turma);
    printf("Aluno Ano:%s\n", dadosA[1][j].anoNascimento);

  }

  return 0;
}

struct aluno adicionar(struct aluno dadosA)
{
  printf("Digite o seu nome:\n");
  fflush(stdin);
  fgets (dadosA.nome, 20, stdin);
  printf("Digite a sua matricula: ");
  fflush(stdin);
  fgets (dadosA.nMatricula, 10,stdin);
  printf("Digite a sua media:\n");
  fflush(stdin);
  scanf("%f", &dadosA.media);
  printf("Digite o seu sexo:\n");
  fflush(stdin);
  fgets(dadosA.sexo, 10, stdin);
  printf("Digite se foi aprovado:\n");
  fflush(stdin);
  fgets(dadosA.aprovado,10,stdin);
  printf("Digite a sua serie:\n");
  scanf("%d", &dadosA.serie);
  printf("Digite a  sua turma:\n");
  fflush(stdin);
  scanf("%c", &dadosA.turma);
  printf("Digite o ano de seu nascimento:\n");
  fflush(stdin);
  fgets(dadosA.anoNascimento, 10,stdin);
  printf("Digite a sua naturalidade:\n");
  fflush(stdin);
  fgets(dadosA.naturalidade, 15, stdin);
return dadosA;
}

