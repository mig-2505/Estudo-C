#include <stdio.h>
// Usando o codigo while
int main (){
    printf("==============================================\n");
    int i = 1;
while (i < 11) { 
    printf("%d\n", i);
    i++;
    }
    printf("==============================================\n");
// Usando o codigo do while
    int j = 1;
    do{
        printf("%d\n", j);
        j++;
    }
    while (j < 11);
    printf("==============================================\n");
// Exemplo 1:
    int dia = 3;
while (dia > 0) {
    printf("%d\n", dia);
    dia--;
}
    printf("Feliz ano novo!\n");
    printf("==============================================\n");
// Exemplo 2:
    int k = 0;
while (k <= 10){
    printf("O valor de k é: %d\n", k);
    k += 2;
}
    printf("==============================================\n");
}