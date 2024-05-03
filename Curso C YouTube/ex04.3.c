#include <stdio.h>
int main(){
    int d;

    printf("Insira um valor de 1 a 7: ");
    scanf("%d", &d);

    switch (d)
    {
    case 1:
        printf("Domingo\n");
        break;

    case 2:
        printf("Sábado\n");
        break;
    
    case 3:
        printf("Sexta\n");
        break;

    case 4:
        printf("Quinta\n");
        break;
    
    case 5:
        printf("Quarta\n");
        break;

    case 6:
        printf("Terça\n");
        break;
    

    case 7:
        printf("Segunda\n");
        break;

    default:
        printf("Valor inválido.\n");
        break;
    }
}