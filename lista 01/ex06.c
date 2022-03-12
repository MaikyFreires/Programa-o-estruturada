/*Fazer um algoritmo/programa que leia a matricula e o salário dos funcionários de uma empresa 
(máximo de 100 funcionários). Após a leitura de todos os dados, informe em uma tela limpa os 
dados lidos e o maior e menor salário dos funcionários. 
*/
#include <stdio.h>
#include <stdlib.h>
int main (){

char matricula[6][100];
int i;
float salario[100], menorSalario =1000, maiorSalario=0; 

for (i=0; i<100; i++){
   printf ("Digite a matricula:\n");
   scanf("%s", &matricula[i]); 
   printf("digite o salario:\n");
   scanf("%f", &salario[i]);

}
system ("cls");

for (i=0; i<100; i++){
if (salario [i] < menorSalario){
    menorSalario = salario[i];
}
for (i=0; i<100; i++){
    if (salario [i] < maiorSalario)
    maiorSalario = salario[i];
}
printf("Maior salario %.2f e menor salario %.2f\n", maiorSalario, menorSalario);
} 
return 0;
}