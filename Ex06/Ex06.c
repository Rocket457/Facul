#include <stdio.h>
#include <math.h>
void main (){
    float C;
    float J;
    float M;
    float F;
    printf("informe o Capital inicial:\n");
    scanf("%f",&C);
    printf("informe a taxa de juros:\n");
    scanf("%f",&J);
    printf("informe qual sera o periodo de aplicacao em meses:\n");
    scanf("%f",&M);
    F = pow((1 + J/100), M);
    F = F * C;
    printf("o montante final sera:%f ",F);

}