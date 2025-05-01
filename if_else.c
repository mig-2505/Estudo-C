#include <stdio.h>

int main (){ // Declarando variaveis
    // if apenas
    printf("==============================================\n");
    int num1 = 30; // Declarando variavel inteira
    int num2 = 20; // Declarando variavel inteira
    if (num1 > num2){ // Se num1 for maior que num2, faça o seguinte:
        printf("O valor de num1 é maior que o valor de num2\n"); // Imprimindo o valor de num1
    }
    printf("----------------------------------------------\n");
    int x = 15; // Declarando variavel inteira
    int y = 10; // Declarando variavel inteira
    if (x > y){ // Se x for maior que y, faça o seguinte:
        printf("O valor de x é maior que o valor de y\n"); // Imprimindo o valor de x
    }
    printf("----------------------------------------------\n");
    // if e else
    int num3 = 10; // Declarando variavel inteira
    int num4 = 20; // Declarando variavel inteira
    if (num3 > num4){
        printf("O valor de x é maior que o valor de y\n");
    }
    else {
        printf("O valor de y é maior que o valor de x\n\n");
    }
    //Exemplo 1
    printf("Exemplo 1:\n");
    int horas = 12;
    if (horas <= 10){
        printf("bom dia.\n");
    }
    else{
        printf("boa tarde.\n");
    }
    printf("----------------------------------------------\n");
    // if, else if e else
    printf("Exemplo 2:\n");
    int horas_dia = 20;
    if ( horas_dia < 10){
        printf("bom dia.\n");
    }
    else if (horas_dia < 18){
        printf("boa tarde.\n");
    }
    else {
        printf("boa noite.\n");
    }
    printf("----------------------------------------------\n");
    // Complemento: da para usar o if de uma forma simplificada, assim:
    int time = 20;
    (time < 18) ? printf("Good day.\n") : printf("Good evening.\n");
    printf("==============================================\n");
}