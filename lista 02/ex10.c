/*Fazer um algoritmo que leia as notas dos alunos de uma disciplina e 
mostre para cada aluno a sua  média  e  se  ele  está  aprovado  ou  reprovado.
Cada  aluno  terá  sempre  2  notas,  uma  nota teórica e uma nota prática.
A média do aluno é obtida como a média ponderada entre a nota teórica  (peso  3)  e  a  nota  prática  (peso  7).
O  algoritmo  principal  deverá  efetuar  a  leitura  dos dados de entrada, acionar um sub-algoritmo para
calcular a média do aluno e a seguir acionar um  outro  sub-algoritmo  para  apresentar 
se  o  aluno  está  aprovado  ou  reprovado.  Para  cada aluno deverão ser lidos as suas notas e seu nome.
*/

#include <stdio.h>
void mediaAluno(float notaPraticaAluno, float notaTeoricaAluno);
void statusAluno(float mediaAluno);
int main (void){
  float notaTeorica, notaPratica;
  printf("Aluno, digite sua nota teorica:\n");
  scanf("%f", &notaTeorica);
  printf("Aluno, digite sua nota pratica:\n");
  scanf("%f", &notaPratica);
  mediaAluno(notaTeorica, notaPratica);
  return 0;
}

void mediaAluno(float notaTeorica, float notaPratica){
  float mediaAluno;
  mediaAluno=((notaTeorica*3)+(notaPratica*7)/10);
  statusAluno(mediaAluno);
}
void statusAluno(float media){
  if (media>=7)
    printf("APROVADO");
  else
    printf("REPROVADO");
}

