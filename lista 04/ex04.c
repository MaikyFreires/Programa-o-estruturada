/*Defina uma estrutura em C para armazenar dados de um veículo 
(Marca, modelo, cor, quantidade  de  portas,motorização), 
crie  uma  função  para  armazenar  os  dados  de  10 veículos,
outra  para  mostrar  os  dados  armazenados,  
a  função  main()deve  conter  um pequeno menu para chamar as funções criadas
*/ 

#include <ctype.h>
#include <stdlib.h>
#include <stdio.h> 
#include <string.h>

struct dadosVeiculos
{
    char marca[50], modelo[50], cor[50];
    int quantidadePortas, motorizacao;
};
int contador=0;
int main (){
struct dadosVeiculos veiculos[10];
int opcao=1;
do{
printf ("escolha uma opcao:\n1-adicionar veiculos\n2-verificar dados veiculos\n");
scanf ("%d", &opcao);
system ("cls");
switch (opcao)
{
case 1:
dados (veiculos);
system ("cls");
    break;
case 2:
imprimirDados (veiculos);
system ("pause");
system ("cls");
break;
default:
break;
}
}while (opcao == 1 || opcao == 2);
} 

void dados (struct dadosVeiculos *veiculos)
{
printf ("carro %d \n",contador);
printf ("digite a marca:\n");
fflush(stdin);
fgets(veiculos[contador].marca,50,stdin);
fflush(stdin);
printf ("digite o modelo:\n");
fflush(stdin);
fgets(veiculos[contador].modelo,50,stdin);
printf ("digite a cor:\n");
fflush(stdin);
fgets(veiculos[contador].cor, 50,stdin);
printf ("digite quantas portas possui:\n");
fflush(stdin);
scanf("%d", &veiculos[contador].quantidadePortas);
printf ("digite a motorizacao:\n");
fflush(stdin);
scanf ("%d", &veiculos[contador].motorizacao);
contador ++;
}
void imprimirDados (struct dadosVeiculos *veiculos)
{
for (int i = 0; i < contador; i++){
    printf("carro %d\n", i);
    printf("Marca: %s\n", veiculos[i].marca);
    printf("Modelo: %s\n", veiculos[i].modelo);
    printf("Cor: %s\n", veiculos[i].cor);
    printf("Quantidade de portas: %d\n", veiculos[i].quantidadePortas);
    printf("Motorizacao: %d\n", veiculos[i].motorizacao);

}




}


