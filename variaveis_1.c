#include <stdio.h>

//Declarando variaveis int, float e char(letras unicas)
int num1= 10; // Variável inteira
float num2= 10.50; // Variável float
char let1= 'A'; // Variável char (letra única)

// para usar o printf com variaveis, é necessário usar %d para inteiros, %f para float, %c para char (letra única), %s para string (texto) e %lf para double (números com ponto flutuante de precisão dupla).
int main(){
  printf("%d\n", num1);
  printf("%f\n", num2);
  printf("%c\n", let1);

//Exemplo em uma frase com variaveis
  printf("O valor do primeiro número é %d, o segundo numero é %f e a letra é %c\n", num1, num2, let1);

//Exemplo de sem declarar variaveis antes
  printf("O meu número favorito é: %d\n", 15);
  printf("O meu número favorito é: %f\n", 15.69);
  printf("A minha letra favorito é: %c\n", 'M');

//Exemplo de variaveis com string
  char nome[] = "Miguel"; // Declaração de uma variável string 
  printf("O meu nome é: %s\n", nome); // Imprimindo a string

//Exemplo com o double
  double num1 = 19.99;  
  printf("O numero é o: %lf\n", num1);
}