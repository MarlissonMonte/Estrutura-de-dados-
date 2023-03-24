#include <stdio.h>

int main() {
  char texto[50];
  int i = 0;
  int acumulador = 0;
  scanf("%50[^\n]s", &texto);
  fflush(stdin);
  

  while (texto[i] != 0){
    if (texto[i] == 'a' || texto[i] == 'A' ){
        acumulador++;
    }
    i++; 
  }
  printf("%i", acumulador);
}