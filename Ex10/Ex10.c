#include<stdio.h>
#include<math.h>
int main (){
    float P1, P2, dividido;
    printf("Valor do P1: ");
    scanf("%f", &P1);
    printf("Valor do P2: ");
    scanf("%f", &P2);
         P1 = pow(P1, 2);
         P2 =pow(P2, 2);
         dividido = (P1/P2);
     printf("Resultado = %f\n", dividido);

   
}
