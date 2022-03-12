//Faça a leitura da altura de até cinco pessoas e apresente a média aritmética entre elas, 
//calculada por um sub-algoritmo.

#include <stdio.h>
float alturaPessoas (float altura[5]);
int main (){
float altura[5]; 
for(int i =0; i <=5; i++){
printf ("digite a altura da %d pessoa:\n",i);
fflush(stdin);
scanf ("%.2f", &altura[i]);
}
alturaPessoas(altura);

return 0;
}

float alturaPessoas (float altura[5]){
float m=0;
int i =0;
for (int i=0; i <=5; i++){
m = m + altura[i]/5;
}
printf ("a media e:%.2f", m);
return m;
}

