//Faça  um  algoritmo  que  calcule,  por  meio  de  suexpoente-algoritmo o  valor  de x(real)elevado  a n(inteiro).

#include <stdio.h>
int calculo (int numero, int expoente);
int main (){
int numero, expoente, resultado;

printf("Digite um numero:");
scanf("%d", &numero);
printf("Digite um expoente:");
scanf("%d", &expoente);

resultado = calculo (numero,expoente);
return 0;
}

int calculo (int numero, int expoente){
int valor, x =1;

valor=expoente;
while (expoente>0)
   {
        x=x*numero;
        expoente--;
   }

printf("o numero %d elevado a %d e: %d",numero,valor,x);

}