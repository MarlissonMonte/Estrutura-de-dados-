#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int m, n, contador, valor; 
    scanf("%i", &m);
    scanf("%i ", &n);

    while (contador <= n){
        if(contador % m == 0){
            valor++;
        }
        else if(n <= m){
            printf("sem multiplos menores que %i ", m);
            break;
        }
        contador++;
    }
    valor = (valor -1);
    
    printf("%i", (valor*m));

}