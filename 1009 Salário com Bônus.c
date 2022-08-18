#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    char nome[15];
    double salario_fixo, comissao, montante, salario_total;

    scanf("%s", &nome);  //poderia ser gets(nome);
    scanf("%lf\n", &salario_fixo);
    scanf("%lf\n", &montante);

    comissao = 0.15*montante;
    salario_total = salario_fixo + comissao;

    printf("TOTAL = R$ %.2lf\n", salario_total);
    system("pause");
    return 0;
}