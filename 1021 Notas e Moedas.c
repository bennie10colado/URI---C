#include <stdio.h>
#include <math.h>

int main()
{

    int valor1, cem, cinquenta, cinquentaD, vinte, vinteD, dez, dezD, cinco, cincoD, dois, doisD;

    int moedas, um, umm, cinquentam, vintem, dezm, cincom, ummmm;

    double valor;

    scanf("%lf", &valor);

    valor1 = valor;
    valor = valor - valor1; // transformação de float para inteiro, devido as divisões por virem a seguinte nos calculos de notas: int/int

    moedas = (valor * 100); // aqui, multiplicamos o valor decimal por 100, para manusear no calculo do numero de moedas.

    // notas
    cem = valor1 / 100;
    cinquenta = valor1 % 100;
    cinquentaD = cinquenta / 50;
    vinte = cinquenta % 50;
    vinteD = vinte / 20;
    dez = vinte % 20;
    dezD = dez / 10;
    cinco = dez % 10;
    cincoD = cinco / 5;
    dois = cinco % 5;
    doisD = dois / 2;
    // moedas
    um = dois % 2;
    umm = um / 1;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", cem);
    printf("%d nota(s) de R$ 50.00\n", cinquentaD);
    printf("%d nota(s) de R$ 20.00\n", vinteD);
    printf("%d nota(s) de R$ 10.00\n", dezD);
    printf("%d nota(s) de R$ 5.00\n", cincoD);
    printf("%d nota(s) de R$ 2.00\n", doisD);

    // moedas
    cinquentam = moedas / 50;
    vintem = (moedas % 50) / 25; // retira-se os divisores por 50, tornando o valor possível dividir em menor quantidade, no caso, por 25; e assim sucessivamente.
    dezm = (((moedas % 50) % 25) / 10);
    cincom = ((((moedas % 50) % 25) % 10) / 5);
    ummmm = ((((moedas % 50) % 25) % 10) % 5) / 1; // aqui retira-se os divisores do valor em moedas, por 50, por 25, por 10 e por 5, de tal forma, mostra o menor numero de moedas de 0.01 R$.

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", umm);
    printf("%d moeda(s) de R$ 0.50\n", cinquentam);
    printf("%d moeda(s) de R$ 0.25\n", vintem);
    printf("%d moeda(s) de R$ 0.10\n", dezm);
    printf("%d moeda(s) de R$ 0.05\n", cincom);
    printf("%d moeda(s) de R$ 0.01\n", ummmm);

    return 0;
}