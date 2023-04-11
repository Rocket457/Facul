int main () {
    float n1, n2, n3, n4, n5, raiz;
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
    raiz = (n1 + n2 + n3 + n4 + n5);
    raiz = pow(raiz, 0.25);
    printf ("a raiz sera: %.2f\n", raiz);
};