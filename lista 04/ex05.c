/*Considerando a estrutura abaixo para representar um vetor, implemente um programa que calcule a soma de dois 
vetores, sabendo que: A + B = <(a1 + a2), (b1 + b2), (c1 + c2)>
*/
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h> 
#include <string.h>
struct vetor{
int a,b,c;

};
void imprimir (struct vetor* calculo,struct vetor*conta);
int main (){
struct vetor calculo[2], conta;

calculo[1].a=10;
calculo[1].b=20;
calculo[1].c=31;

calculo[2].a=32;
calculo[2].b=51;
calculo[2].c=73;
conta.a=calculo[1].a+calculo[2].a;
conta.b=calculo[1].b+calculo[2].b;
conta.c=calculo[1].c+calculo[2].c;
imprimir (calculo,&conta);

}
void imprimir (struct vetor* calculo,struct vetor*conta)
{
  printf("valor a = %d\n", conta->a);
  printf("valor b = %d\n", conta->b);
  printf("valor c = %d\n", conta->c);
}