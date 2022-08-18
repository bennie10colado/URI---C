#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int time, average_velocity;
    float space, litros_consumidos_na_viagem;

    scanf("%d %d", &time, &average_velocity);
    
    space = average_velocity * time;

    litros_consumidos_na_viagem = space / 12;

    printf("%.3f\n", litros_consumidos_na_viagem);

    system("pause");
    return 0;
} 