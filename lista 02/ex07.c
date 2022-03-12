/*Elabore  dois sub-algoritmos,  além  do  algoritmo  principal,  um  que  calcule  duas  operações aritméticas  consecutivas  sobre  três  valores  inteiros  e  dois  operadores,  lidos  no  algoritmo principal e outro que verifique 
se o resultado final das operaçõesproduzirá um número parou ímpar. 
Os resultados devem ser apresentados no algoritmo principalExemplo (5 + 3 * 2 = ?)
*/
#include <stdio.h>
int calculo(int valor1, int valor2, int valor3);
float semIgual(int resultado);
int main(void) {
  int numero1, numero2, numero3;
  printf("digite o primeiro numero:\n");
  scanf("%i", &numero1);
  printf("digite o segundo numero:\n");
  scanf("%i", &numero2);
  printf("digite o terceiro numero:\n");
  scanf("%i", &numero3);
  printf("%i\n",calculo(numero1,numero2, numero3));
  if (semIgual(calculo(numero1,numero2,numero3))==0)
    printf("o resultado deu par");
  else
    printf("o resultado deu impar");
  return 0;
}
int calculo(int valor1, int valor2, int valor3){
  int resultado;
  resultado=(valor1+valor2*valor3);
  return resultado;
} 
float semIgual(int resultado){
  float conta, verifica;
  int verifica2;
  verifica=(resultado*0.5); 
  verifica2=verifica;
  conta=verifica-verifica2;
  return conta;
}