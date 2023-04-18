#include <math.h>
#include <stdio.h>

int main(){
    float tempo, altura;
    printf("Informe o tempo em segundos\n");
    scanf("%f", &tempo);
    altura = pow(-9*tempo,2);   
    altura = altura + 120*tempo; 
    printf("a altura final do projétil foi: %.2f metros", altura);

}