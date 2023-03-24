#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    bool limite = false;
    int n, c;
    scanf("%i %i", &n, &c);
    int p = 0;

    while (n > 0){
        n--;
        int s, e;
        scanf("%i %i", &s, &e);
        p = p - s + e;
        if (p > c){
            limite = true;
        }
    }
    if (limite == true){
        printf("S");
    } 
    else{
        printf("N");
    }
    
}