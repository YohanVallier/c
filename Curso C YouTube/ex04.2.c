#include <stdio.h>
int main(){
    float m;
    printf("Digite a nota: ");
    scanf("%f", &m);
    
    if(m >= 7){
        printf("Aprovado!\n");
    }
    else{
        printf("Reprovado!\n");
    }
} 