/*Desenvolva  um  algoritmo  que  leia
um  peso em  quilogramas  (kg)  e  apresente, 
por  meio  de outros   dois   sub-algoritmos   
(apresentaGramae apresentaTonelada),   o   valor   do  
peso informado em gramas e em toneladas respectivamente.
A leitura e validação do peso deve ser feita por um outro 
sub-algoritmo chamado leValidaPeso
*/

# include <stdio.h>
float leValidaPeso(float peso);
void apresentaGrama(float grama);
void apresentaTonelada(float tonelada);
int main (){
        int opcao;
        float pesos;
        pesos= leValidaPeso(pesos);
        printf ("escolha uma opcao:\n1-grama\n2-toneladas\n");
        scanf ("%d", &opcao);
        switch (opcao)
        {
                case 1:
                apresentaGrama(pesos);
                break;
                case 2:
                apresentaTonelada(pesos);
                break;
                default:
                break;
        }

}
float leValidaPeso(float peso)
{
  printf("Digite o peso:\n");
  scanf("%f", &peso);
  return peso;
}

void apresentaGrama(float grama)
{
  grama=(grama*1000);
  printf("Gramas: %.2f\n", grama);
}

void apresentaTonelada(float tonelada)
{
  tonelada=(tonelada/1000);
  printf("Toneladas: %f\n", tonelada);
}