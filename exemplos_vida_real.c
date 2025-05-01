#include <stdio.h>
#include <stdbool.h>

int main(){
    printf("==============================================\n");
    printf("Exemplo de uso de variáveis em C\n");
    int itens = 10;
    float preco = 5.99; 
    float total = itens * preco;
    char sifrao = '$';

    printf("numero de itens: %d\n", itens);
    printf("preço do item: %c%.2f\n", sifrao, preco);
    printf("preço total: %c%.2f\n", sifrao, total);

    printf("==============================================\n");

    printf("Exemplo de uso da lógica booleana\n");
    int idade = 17;
    int votar = 18;
    printf("Idade: %d\n", idade >= votar);

    printf("==============================================\n");

    printf("Exemplo de uso de if, else if e else, de uma porta com codigo\n");

    int codigo = 1234;
    if (codigo == 1234){
        printf("porta aberta\n");
    }
    else if (codigo == 4321){
        printf("porta fechada\n");
    }
    else {
        printf("codigo errado\n");
    }

    printf("==============================================\n");

    printf("Exemplo do uso de while.\n");
    int dice = 1;
while(dice <= 6){
    if (dice < 6){
        printf("Está errado vc tirou: %d\n", dice);
    }
    else {
        printf("Está certo vc tirou: %d\n", dice);
    }
    dice = dice + 1;
}
    printf("==============================================\n");
}