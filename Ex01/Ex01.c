#include <stdio.h>
    void main() {
    float n1, n2, n3, n4, n5, media;
    printf ("escreva o primeiro numero: \n");
    scanf ("%f", &n1);
    printf ("escreva o segundo numero: \n");
    scanf ("%f", &n2);
    printf ("escreva o terceiro numero: \n");
    scanf ("%f", &n3);
    printf ("escreva o quarto numero: \n");
    scanf ("%f", &n4);
    printf ("escreva o quinto numero: \n");
    scanf ("%f", &n5);
    media = (n1 + n2 + n3 + n4 + n5)/5;
    printf ("número digitado: %.1f \n", media);
    }