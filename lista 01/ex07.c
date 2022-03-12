/*Desenvolva um algoritmo que cadastre os preços de até 100 diferentes CDs em uma loja. Após 
este cadastro, o algoritmo deverá possibilitar a execução de uma de duas funções para aumento 
dos preços cadastrados, sendo a primeira de 10% para todos os CDs, enquanto a segunda 
aumenta o percentual informado pelo vendedor para todos os CDs. Será o vendedor que 
escolherá o tipo de aumento desejado. Após os cálculos deverá ser apresentado o percentual de 
aumento e, para cada CD, o valor sem aumento e o valor com aumento.
*/
#include <stdio.h>

int main (){

float cds[3];
int i;

for (i=0; i< 3; i++)
{
printf ("digite o valor dos cds:\n");
scanf ("%f", &cds[i]);

} 

    return 0; 
}