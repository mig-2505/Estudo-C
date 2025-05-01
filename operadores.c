#include <stdio.h>

int main(){
    //Operadores normais
    int num1 = 10 + 50;
    printf("==============================================\n");
    printf("Operadores normais:\n");
    printf("O valor de num1 é: %d\n", num1); 

    //Outros exemplos  
    int num2 = 20;
    int num3 = num2 + 30;
    int num4 = num2 + num3;
    printf("O valor do num3 é: %d\n", num3);
    printf("O valor do num4 é: %d\n", num4);
    printf("==============================================\n");

    //Operadores Aritméticos

    int x = 10;  
    int y = 5;

    //Soma
    int som1 = x + y;
    printf("==============================================\n");
    printf("Operadores Aritméticos:\n");
    printf("A soma é: %d\n", som1); 

    //Subtração
    int sub1 = x - y;
    printf("A subtração é: %d\n", sub1);

   //Multiplicação  
   int mult1 = x * y;
   printf("A multiplicação é: %d\n", mult1);
   
    //Divisão
    int div1 = x / y;
    printf("A divisão é: %d\n", div1);

    //Resto da divisão
    int rest1 = x % y;
    printf("O resto da divisão é: %d\n", rest1);

    //Incremento adiciona 1 a variavel declarada
    printf("O valor do incremento é: %d\n", ++x);
    printf("O valor do incremento é: %d\n", ++y); 

    //Decremento sunbtrai 1 a variavel declarada
    printf("O valor do decremento é: %d\n", --x);
    printf("O valor do decremento é: %d\n", --y);
    printf("==============================================\n");

}