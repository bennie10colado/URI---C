#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int valor, segundos, minutos, horas, hora_em_segundos;
    scanf("%d", &valor);

    hora_em_segundos = 3600;

    horas = valor/hora_em_segundos;

    minutos = (valor-(hora_em_segundos*horas))/60;//pega-se o valor dado em segundos, subtrai-se o o valor para retirar os numeros inteiros em horas
    //então, se divide por 60, para ter o valor em minutos

    segundos = (valor-(hora_em_segundos*horas)-(minutos*60));//pega-se o valor total de segundos, retira-se os inteiros de horas, e se subtrai
    //o número "minutos", e *60 para converter em segundos sem os inteiros de minutos, tornando assim o valor em segundos até 60

    printf("%d:%d:%d\n", horas, minutos, segundos);

    system("pause");
    return 0;
} 
