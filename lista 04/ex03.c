/*
Escreva as instruções necessárias para definir
um tipo de ESTRUTURA que contenha 2 elementos, uma “STRING” de 10 caracteres e um INTEIRO*/

#include <ctype.h>
#include <stdlib.h>
#include <stdio.h> 
#include <string.h>

#include <stdio.h>
#include <stdlib.h>

void menu();
void passo1();
void passo2();
void passo3();
void passo4();
void passo5();
void passo6();
void passo7();

int main() {
  int opcao;

  menu();
  system("pause");
  system("cls");
  opcao=1;
  do {
    switch (opcao) {
      case 1:
        menu();
        passo1();
        system("pause");
        system("cls");
        opcao=2;
      break;
      case 2:
        menu();
        passo2();
        opcao=3;
        system("pause");
        system("cls");
      break;
      case 3:
        menu();
        passo3();
        opcao=4;
        system("pause");
        system("cls");
      break;
      case 4:
        menu();
        passo4();
        opcao=5;
        system("pause");
        system("cls");
      break;
      case 5:
        menu();
        passo5();
        opcao=6;
        system("pause");
        system("cls");
      break;
      case 6:
        menu();
        passo6();
        opcao=7;
        system("pause");
        system("cls");
      break;
      case 7:
        menu();
        passo7();
        printf("digite um numero que deseja rever\n(1 a 7)\n");
        fflush(stdin);
        scanf("%d", &opcao);
        system("cls");
      break;

    }
  } while(opcao !=99);
  return 0;
}

void menu(){
printf ("instrucoes para definir uma struct\n");
}

void passo1(){
  printf ("\n//biblioteca\n");
  printf("#include <stdio>\n\n");
  printf("//1-declare um variavel complexa (struct)\n");
  printf("struct \n\n");
}

void passo2(){
  printf("//2-defina um nome para a variavel complexa\n");
  printf("struct estrutura\n\n");
}

void passo3(){
  printf("//3-abra e feche chaves e finalize com ponto e virgula\n");
  printf("struct estrutura {\n\n    };\n\n");
}

void passo4(){
  printf("//4-declare as variaveis simples dentro do Struct\n");
  printf("    struct estrutura {\n      char nome[10];\n      int numero;\n    };\n\n");
}

void passo5(){
  printf("//5-declare a variavel de Struct e defina o nome\n");
  printf("struct estrutura {\n      char nome[10];\n      int numero;\n    };\n\n");
  printf("int main (){\n      struct estrutura dados;\n    return 0;\n    }\n");
}

void passo6(){
  printf("//6-para usar as variaveis simples passe pela variavel de struct\n");
  printf("struct estrutura {\n      char nome[10];\n      int numero;\n    };\n\n");
  printf("int main (){\n      struct estrutura dados;\n\n");
  printf("printf(\"Digite um nome: \");\n      fgets(dados.nome,10,stdin);\n\n");
  printf("printf(\"Digite um numero: \");\n");
  printf("scanf(\"%%d\", &dados.numero);\n\n");
  printf("return 0;\n    }\n");
}

void passo7(){
  printf("//7-para imprimir as variaveis simples tambem passe pela variavel de struct\n");
  printf("    struct estrutura {\n      char nome[10];\n      int numero;\n    };\n\n");
  printf("    int main (){\n      struct estrutura dados;\n\n");
  printf("      printf(\"Digite um nome: \");\n      fgets(dados.nome,10,stdin);\n\n");
  printf("      printf(\"Digite um numero: \");\n");
  printf("      scanf(\"%%d\", &dados.nome);\n\n");
  printf("      printf(\"o nome digitado e: %%s \", dados.nome);\n\n");
  printf("      printf(\"o numero digitado e: %%d \", dados.numero);\n\n");
  printf("      return 0;\n    }\n");
}
