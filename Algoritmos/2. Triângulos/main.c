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
      printf("Isso n�o pode ser um tri�ngulo! (dois lados n�o se tocam!)\n\n");
    } else if ((A + B == C || B + C == A || C + A == B) && (A != 0 && B != 0 && C != 0)) {
      printf("Isso � uma RETA!\n\n");
    }

    if (A == 0 || B == 0 || C == 0) {
      printf("Valor Inv�lido!\n\n");
    }

  } while (A == 0 || B == 0 || C == 0 || A + B <= C || B + C <= A || C + A <= B);

  if (A == B && B == C) {
    printf("� um tri�ngulo EQUIL�TERO!");
  } else if (A == B || B == C || C == A) {
    printf("� um tri�ngulo IS�CELES!");
  } else {
    printf("� um tri�ngulo ESCALENO!");
  }

  return 0;
}
