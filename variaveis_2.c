#include <stdio.h>

//Mudando variaveis
int main(){
    int num1 = 10;
    int num2= 20;

//Mudando as variaveis
    num1 = num2; // Mudando o valor de num1 para o valor de num2
    printf("O valor de num1 é: %d\n", num1); // Imprimindo o valor de num1

//Mudando as variaveis( de outra forma )
    int num3 = 15;
    int num4;
    num4 = num3; // Mudando o valor de num3 para o valor de num4
    printf("O valor do num4 é: %d\n", num4); // Imprimindo o valor de num4

//Variaveis apartir de letras para numeros
    int x = 5;
    int y = 6;
    int soma = x + y;
    printf("A soma das letras é: %d\n", soma); 

//Multiplas variaveis
    int a = 5, b = 6, c = 9;
    printf("O valor da soma das letras é: %d\n", a + b + c); // Soma de a, b e c

//Variaveis com letras
    char let1 = 'A'; // Variável char (letra única)
    char let2 = 'B'; 
    char let3 = 'C';
    printf("As letras são: %c, %c e %c\n", let1, let2, let3); // Imprimindo as letras

//Casas após virgula
    float ex1 = 5.5; // Variável float (número com casas decimais)
    printf("%f\n", ex1); // Imprimindo o valor de ex1 com 6 digitos
    printf("%.2f\n", ex1); // Imprimindo o valor de ex1 com 2 casas decimais
    printf("%.3f\n", ex1); // Imprimindo o valor de ex1 com 3 casas decimais
    printf("%.4f\n", ex1); // Imprimindo o valor de ex1 com 4 casas decimais
    printf("%.5f\n", ex1); // Imprimindo o valor de ex1 com 5 casas decimais
}

 
