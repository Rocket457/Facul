int main(){
    //scanf para valor da prestação em atraso, apresentar valor 
    //do acressimo, valor total a pagar e desconto
    float prestacao, acressimo;
    printf("Qual o valor da prestacao?");
    scanf("%f", &prestacao);
    acressimo = prestacao * 0.1;
    float prestacaototal = prestacao + acressimo;
    float desconto = acressimo *0.1;
    prestacaototal = prestacao - desconto;
    printf("o valor do acressimo sera: %f\n", acressimo);
    printf("o valor do desconto sera: %f\n", desconto);
    printf("valor total da prestacao sera %.2f", prestacaototal);


}; 