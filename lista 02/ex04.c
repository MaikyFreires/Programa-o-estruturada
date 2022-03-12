/*Elabore um algoritmo que solicite ao usuário o seu ano de nascimento e o ano atual. Após a 
leitura, ele acionará um sub-algoritmo, denominado apresentaClassificacao, que apresentará 
a idade provável, em anos, deste usuário, e sua classificação. Ele deverá acionar um outro subalgoritmo, chamada obtemNivel, que identificará qual o nível da idade deste usuário, 
classificando-a em:
IDADE <= 10 CRIANÇA
10 > IDADE < 18 ADOLESCENTE
18 >= IDADE < 25 JOVEM
25 >= IDADE <= 58 ADULTO
IDADE > 58 IDOSO
Esta classificação será apresentada, juntamente com a idade calculada, no sub-algoritmo 
calculaIdade. Os dados deverão ser lidos enquanto o usuário desejar.
*/
#include <stdio.h> // biblioteca
int main (){ // inicio de programa

// declaração de variveis e função
 int apresentaClassificacao( int anoAtual, int anoNascimento);
 char obtemNivel (char resultado);
 int  anoAtual, anoNascimento, resultado, classificacao; 

// leitura dos dados 
    printf ("digite o ano atual:\n");
    scanf ("%d", &anoAtual);
    printf ("digite o ano do seu Nascimento:\n");
    scanf("%d", &anoNascimento);
// chamado da função
resultado = apresentaClassificacao (anoAtual, anoNascimento);
    printf ("a sua idade e:%d anos\n", resultado);
classificacao = obtemNivel (resultado);
    
}

int apresentaClassificacao( int anoAtual, int anoNascimento){
int subtracao;
subtracao = anoAtual - anoNascimento; 
return subtracao; 
}

char obtemNivel (char teste){
int idade;
if (idade <=10)
    printf ("logo voce e crianca\n");
else if (idade > 10 || idade < 18)
    printf ("logo voce e adolescente\n");
else if (idade >= 18 || idade < 25)
    printf ("logo voce e jovem\n");
else if (idade >= 25 || idade < 58)
    printf("logo voce e adulto\n");
else if (idade > 58)
    printf ("logo voce e idoso\n");
}