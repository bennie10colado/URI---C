#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int distancia_x_entre_os_carros, leva_y_tempo;

    //1km a cada 2 minutos, logo 1x = 2y,  e assim se fazendo uma regra de 3 simples, se resolve.
    
    scanf("%d",&distancia_x_entre_os_carros);

    leva_y_tempo = distancia_x_entre_os_carros * 2;

    printf("%d minutos\n", leva_y_tempo);

    system("pause");
    return 0;
} 