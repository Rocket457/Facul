#include <stdio.h>

int main (){
    float Distancia;
    printf("Qual foi sua distancia percorrida?");
    scanf("%f",&Distancia);
    Distancia = Distancia * 100000;
    printf("a distancia percorrida em centimetros foi: %.2f", Distancia);
};