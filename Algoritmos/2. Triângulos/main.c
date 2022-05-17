#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float A, B, C;
  do {
    printf("Lado A: ");
    scanf("%f", &A);
    printf("Lado B: ");
    scanf("%f", &B);
    printf("Lado C: ");
    scanf("%f", &C);

    if ((A + B < C || B + C < A || C + A < B) && (A != 0 && B != 0 && C != 0)) {
      printf("Isso não pode ser um triângulo! (dois lados não se tocam!)\n\n");
    } else if ((A + B == C || B + C == A || C + A == B) && (A != 0 && B != 0 && C != 0)) {
      printf("Isso é uma RETA!\n\n");
    }

    if (A == 0 || B == 0 || C == 0) {
      printf("Valor Inválido!\n\n");
    }

  } while (A == 0 || B == 0 || C == 0 || A + B <= C || B + C <= A || C + A <= B);

  if (A == B && B == C) {
    printf("É um triângulo EQUILÁTERO!");
  } else if (A == B || B == C || C == A) {
    printf("É um triângulo ISÓCELES!");
  } else {
    printf("É um triângulo ESCALENO!");
  }

  return 0;
}
