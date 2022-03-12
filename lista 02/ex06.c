/* Solicite a um professor a quantidade de alunos matriculados em sua disciplina, a quantidade 
de aprovados e reprovados no final do semestre. Apresente, por meio de um sub-algoritmo 
denominado apresentaPorcentagem, as porcentagens de alunos reprovados e aprovados no 
semestre corrente.
*/

#include <stdio.h>
float apresentarPorcentagem(int aprovados, int reprovados, int quantidadeAlunos);
int main() {
  int quantidadeAlunos, aprovados, reprovados;
  printf("Digite a quantidade de alunos matriculados: \n");
  scanf("%i", &quantidadeAlunos);
  printf("Digite a quantidade de alunos aprovados: \n");
  scanf("%i", &aprovados);
  printf("Digite a quantidade de alunos reprovados: \n");
  scanf("%i", &reprovados);
  apresentarPorcentagem(aprovados, reprovados, quantidadeAlunos);
  return 0;
}

float apresentarPorcentagem(int aprovados, int reprovados, int quantidadeAlunos){
  float calculo;
  calculo = (aprovados*100)/quantidadeAlunos;
  printf("a porcentagem de alunos aprovados e: %.2f %%\n",calculo);
  calculo = (reprovados*100)/quantidadeAlunos;
  printf("a porcentagem de alunos reprovados e: %.2f %%\n",calculo);
}
