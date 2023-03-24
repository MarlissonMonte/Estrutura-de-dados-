#include <stdio.h>

int main()
{
    int qntd, menor, i;
    int numero[50];
    scanf("%i", &qntd);

    for (i = 0; i < qntd; i++){
        scanf("%d", &numero[i]);
    }

    int menorNumero = numero[0];
    int menorPos = 0;
    for (i = 0; i < qntd; i++)
    {
        if (numero[i] < menorNumero)
        {
            menorNumero = numero[i];
            menorPos = i;
        }
    }

    printf("Menor valor: %i\n", menorNumero);
    printf("Posicao: %i", menorPos); 
}