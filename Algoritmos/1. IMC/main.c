#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float Peso, Altura, IMC;

  printf("Peso: ");
  scanf("%f", &Peso);
  printf("Altura: ");
  scanf("%f", &Altura);

  IMC = Peso / (Altura * Altura);
  printf("O seu IMC é: %.2f", IMC);

  return 0;
}
