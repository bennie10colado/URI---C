#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int x_km;
    float y_l, media;
    
   
    scanf("%d %f",&x_km,&y_l);

    media = x_km / y_l;

    printf("%.3f km/l\n", media);


    system("pause");
    return 0;
}