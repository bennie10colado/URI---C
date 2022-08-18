#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double  A, B, media_pon;

    scanf("%lf", &A);
    scanf("%lf", &B);

    media_pon = (A * 3.5)/11 + (B * 7.5)/11;

    printf("MEDIA = %.5lf\n", media_pon); 

    return 0;
}