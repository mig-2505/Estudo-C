#include <stdio.h>
#include <stdbool.h> // Biblioteca para usar o tipo bool
// logica booleana é um tipo de variavel que só pode ter dois valores, verdadeiro ou falso, 1 ou 0, true ou false, etc.
// Para usar a logica booleana, vc tem que usar o tipo de variavel "bool".
int main(){
    printf("==============================================\n");
    printf("Exemplo de uso da lógica booleana:\n\n");
    bool verdadeiro = true;
    bool falso = false;
    printf("O valor de verdadeiro é: %d\n", verdadeiro); 
    printf("O valor de falso é: %d\n\n", falso);
    printf("comparando valores e variaveis:\n\n");
    printf("O valor é: %d\n", 10 > 9); // 10 é maior que 9, então o resultado é 1 (true)
    printf("O valor é: %d\n", 10 < 9); // 10 não é menor que 9, então o resultado é 0 (false)
    printf("----------------------------------------------\n");
    int x = 10;
    int y = 9;
    printf("O valor é: %d\n", x > y);
    printf("----------------------------------------------\n");
    printf("O valor é: %d\n", 10 == 10); // retorna 1 (true) porque 10 é igual a 10
    printf("O valor é: %d\n", 10 == 15); // retorna 0 (false) porque 10 não é igual a 15
    printf("O valor é: %d\n", 5 == 55);  // retorna 0 (false) porque 5 não é igual a 55
    printf("----------------------------------------------\n");
    bool HamburgerTasty = true;
    bool PizzaTasty = true;
    // Vai ver se hamburger e pizza são tasty.
    printf("O valor é: %d\n", HamburgerTasty == PizzaTasty);
    printf("==============================================\n");
}
