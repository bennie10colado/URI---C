#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int valor_inicial_de_dias, dias, meses, anos;
    scanf("%d", &valor_inicial_de_dias);

    anos = valor_inicial_de_dias/365;
    meses = (valor_inicial_de_dias%365)/30; //pega-se o resto do valor divido por 365,
    // ignorando o quociente que é o valor em anos, o resto é valor em dias que sobra, dividindo-se por 30 tem-se o valor em meses inteiro.

    dias = (valor_inicial_de_dias%365)%30;//parecido com o calculo anterior, porém, pegando-se o resto por 30, o valor que resta é o numero
    //de dias sem os inteiros meses e anos, colocando apenas o valor em dias, com máximo até 30 pela divisão.

    printf("%d ano(s)\n""%d mes(es)\n""%d dia(s)\n", anos, meses, dias);
    
    system("pause");
    return 0;
} 
