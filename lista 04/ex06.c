/*Definir  a estrutura cuja  representação  gráfica é  dada  a  seguir, 
definir  os  campos  com os tipos básicosnecessários.
a)Crie um vetor Cadastro com 5 elementos.
b)Permita ao usuário entrar com dados para preencher esses 5 cadastros.
c)Encontre a pessoa com maior idade entre os cadastrados
d)Encontre as pessoas do sexo masculino
e)Encontre as pessoas com salário maior que 1000.
f)Imprima os dados da pessoa cuja identidade seja igual a um valor fornecido pelo usuário
*/

#include <ctype.h>
#include <stdlib.h>
#include <stdio.h> 
#include <string.h>

typedef struct 
{
char rua[30], bairro[30],cidade[30], estado[30];
int cep;
}enderecoUsuario;

struct basicosnecessarios{
char nome[30], estadoCivil[30],sexo[10];
int cpf, telefone, idade, salario, identidade;
enderecoUsuario endereco;
};
void cadastro (struct basicosnecessarios*dados);
void idadeUsu(struct basicosnecessarios*dados);
void sexo (struct basicosnecessarios*dados);
void salario (struct basicosnecessarios*dados);
void imprimir (struct basicosnecessarios*dados);
int cont;
int main (){
struct basicosnecessarios dados[5];
int opcao=1;
do{
printf ("escolha uma opcao:\n1-cadastro\n2-maior idade\n3-sexo Masculino\n4-maior salario\n5-imprimir Usuarios\n");
scanf ("%d", &opcao);
system ("cls");
switch (opcao)
{
case 1:
cadastro (dados);
system ("cls");
break;
case 2:
idadeUsu(dados);
system ("cls");
break;
case 3:
sexo (dados);
system ("cls");
break;
case 4:
salario(dados);
system ("cls");
break;
imprimir(dados);
system ("cls");
default:
      break;
}

}while (opcao == 1 || opcao == 2);

}
void cadastro (struct basicosnecessarios*dados)
{
printf ("digite a identidade:\n");
scanf ("%d", &dados[cont].identidade);
printf ("digite o seu nome:\n");
fflush(stdin);
fgets (dados[cont].nome ,30,stdin);
printf ("digite seu sexo:\n");
fflush(stdin);
fgets(dados[cont].sexo,10,stdin);
printf ("digite sua idade:\n");
scanf ("%d", &dados[cont].idade);
printf ("digite seu estado civil:\n");
fflush(stdin);
fgets (dados[cont].estadoCivil, 30, stdin);
printf ("digite o seu cep:\n");
fflush(stdin);
scanf ("%d", &dados[cont].endereco.cep);
printf ("digite a estado que voce mora:\n");
fflush(stdin);
fgets(dados[cont].endereco.estado, 30, stdin);
printf ("digite a cidade que voce mora:\n");
fflush(stdin);
fgets(dados[cont].endereco.cidade, 30, stdin);
printf ("digite a bairro que voce mora:\n");
fflush(stdin);
fgets(dados[cont].endereco.bairro, 30, stdin);
printf ("digite a rua que voce mora:\n");
fflush(stdin);
fgets(dados[cont].endereco.rua, 30, stdin);
printf ("digite seu cpf:\n");
fflush(stdin);
scanf ("%d", &dados[cont].cpf);
printf ("digite seu telefone:\n");
fflush(stdin);
scanf ("%d",&dados[cont].telefone);
printf ("digite o seu salario:\n");
fflush(stdin);
scanf ("%d", &dados[cont].salario);
cont ++;
}
void idadeUsu(struct basicosnecessarios*dados)
{
int receberIdade;
receberIdade = dados[0].idade;
for (int i=0; i<5; i++)
{
if (dados[i].idade > receberIdade);
receberIdade=dados[i].idade;
}
printf (" a maior idade:%d\n",receberIdade);
}
void sexo (struct basicosnecessarios*dados)
{
for (int j=0; j<5; j++)
{
if (stricmp(dados[cont].sexo, "masculino")==0){
      printf ("identidade:%d\n", dados[cont].identidade);
      printf("Nome: %s\n", dados[cont].nome);
      printf("Idade: %d\n", dados[cont].idade);
}
}

}
void salario (struct basicosnecessarios*dados)
{
for (int y=0; y<5; y++)
{
if (dados[y].salario > 1000){
      printf ("identidade: %d\n", dados[cont].identidade);
      printf("Nome: %s\n", dados[cont].nome);
      printf ("salario:%d\n", dados[cont].salario);
}
}

}
void imprimir (struct basicosnecessarios*dados)
{
int buscar;
printf ("digite a identidade para buscar:\n");
scanf ("%d", buscar);
for (int x=0; x<5; x++)
{
if (buscar==dados[x].identidade){
      printf("Identidade: %i\n", dados[x].identidade);
      printf("Nome: %s\n", dados[x].nome);
      printf("Sexo: %s\n", dados[x].sexo);
      printf("Idade: %i\n", dados[x].idade);
      printf("Estado civil: %s\n", dados[x].estadoCivil);
      printf("CEP: %s\n", dados[x].endereco.cep);
      printf("Estado: %s\n", dados[x].endereco.estado);
      printf("Cidade: %s\n", dados[x].endereco.cidade);
      printf("Bairro: %s\n", dados[x].endereco.bairro);
      printf("Rua: %s\n", dados[x].endereco.rua);  
      printf("CPF: %i\n", dados[x].cpf);
      printf("Telefone: %i\n", dados[x].telefone);
      printf("Salario: %.2f\n", dados[x].salario);
}
}

}
