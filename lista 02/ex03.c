/*Desenvolva um algoritmo que leia as duas notas de até 20 alunos e calcule as possíveis médias finais para cada um deles, 
usando pelo menos 3 sub-algoritmos, um para cada tipo de média apresentada  nos  itens  a,b  e  c. 
Para  cada  aluno  deverá  ser  lido  as  notas,  chamado  as  três funções e apresentado as médias no algoritmo principal 
a)Média aritmética das duas notas
b) Média ponderada com peso 4 e 6 respectivamente
c) Média ponderada com peso 3 e 7 respectivamente
*/
#include <stdio.h>
int mediasAluno (int nota1, int nota2, int escolha);
int main (){
int nota1, nota2, escolha, media, opcao;
do {
system ("cls");
printf ("digite a nota 1 do aluno:(1 a 10)\n");
scanf ("%d", &nota1);
printf ("digite a nota 2 do aluno:(1 a 10)\n");
scanf ("%d", &nota2);
printf ("escolha uma media:\n1)Media aritmetica das duas notas\n2) Media ponderada com peso 4 e 6 respectivamente\n3) Media ponderada com peso 3 e 7 respectivamente:\n");
scanf ("%d", &escolha);
media= mediasAluno(nota1, nota2,escolha);
printf ("a media e:%d\n", media);
printf ("deseja ver a media de um outro aluno:(1 - sim e 2 - nao)\n");
scanf ("%d", &opcao);
}while (opcao == 1 || opcao == 2);
return 0;
}

int mediasAluno (int nota1, int nota2, int escolha){
int m;
switch (escolha)
{
case 1:
    printf ("media aritmetica\n");
    m=nota1+nota2/2;
    break;
case 2: 
    printf ("media ponderada\n");
    m = nota1*4+nota2*6/4+6;
    break;
case 3:
    printf ("media ponderada\n");
    m = nota1*3+nota2*7/3+7;
break;
default:
    break;
}
return m;
}