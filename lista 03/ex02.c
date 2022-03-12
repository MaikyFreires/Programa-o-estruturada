/*Desenvolva  um  programa  que  solicite  o  nome  de  cinco  equipamentos  de  informática.  
Compare  os  cinco nomes  fornecidos  para  verificar  se  existe  algum  solicitado  em  duplicidade
e  informe  o  usuário  somente  o nome duplicado.
*/
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h> 
#include <string.h>
int main (){
char nomeEqui[5][50], nomeEquiq[5][50];
int i;
for ( i=0; i <5; i++){ 
printf ("digite o nome do equipamento:\n");
fgets (nomeEqui[i], 50,stdin);
}
for (int j=i;j < 5; j++)
{
if (strcmp(nomeEqui[i], nomeEqui[i])==0){
printf("O equipamento (%s) esta duplicado!\n", nomeEqui[i]);
}
i++;
}

}
//talvez eu termine