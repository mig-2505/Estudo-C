#include <stdio.h>
// Se vc estiver escrevendo mts ifs e elses, vc pode usar o switch, ou precisar de muitos casos.
int main (){
    int dia = 1;
    printf("==============================================\n");
    switch (dia){
        case 1:
            printf("segunda-feira\n");
            break;
        case 2:
            printf("terça-feira\n");
            break;
        case 3:
            printf("quarta-feira\n");
            break;
        case 4:
            printf("quinta-feira\n");
            break;
        case 5:
            printf("sexta-feira\n");
            break;
        case 6:
            printf("sabado\n");
            break;
        case 7:
            printf("domingo\n");
            break;
    }
    printf("==============================================\n");
}