#include <math.h>
#include <stdio.h>

int main(){
    float A, B, C, resultado1, delta, deltaB, resultado2;
    printf("Informe a variavel A:\n");
    scanf("%f",&A);
    printf("Informe a variavel B:\n");
    scanf("%f",&B);
    printf("Informe a variavel C:\n");
    scanf("%f",&C);
    deltaB = pow(B, 2);
    delta = deltaB - 4*A*C;
    delta = sqrt(delta);
    if(delta < 0){
        printf("O delta é negativo!");
    }
    else{
        resultado1 = -B + delta;
        resultado2 = B + delta;
        resultado1 = resultado1 / (2*A);
        resultado2 = resultado2 / (2*A);
        printf("A raiz negativa sera: %.2f\n",resultado1);
        printf("A raiz positiva sera: %.2f\n",resultado2);
    };
}