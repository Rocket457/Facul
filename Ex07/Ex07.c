#include <math.h>
#include <stdio.h>

int main(){
    float bacteriasB;
    float tempo;
    printf("Informe o numero de dias:\n");
    scanf("%f",&tempo);
    tempo = tempo * 24;
    bacteriasB = pow(2, tempo/12);
    printf("O numero final de bacterias foi: %f", bacteriasB);
}