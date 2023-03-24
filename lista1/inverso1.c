#include <stdio.h>

int main(){

    int i;
    int q = 0;
    int contador = 0;
    int vetor[50];

    scanf("%i \n", &q);
    while (contador <= q){
        scanf("%i ", &vetor[i]);
        contador++;
    }
    while (contador >= q){
        printf("%i ", vetor[i]):
        contador--;
    }
}
