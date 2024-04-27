#include <stdio.h>
#define texto "Entrada e saida de dados."

int main(){
    printf("%s\n", texto);
    int idade = 0;
    float altura = 0.0;
    char nome[50] = "";
    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Digite a altura: ");
    scanf("%f", &altura);
    printf("Digite o seu nome: ");
    scanf("%s", &nome);
    
    printf("Dados informados\n");
    printf("Sua idade é : %d\n", &idade);
    printf("Sua altura é: %f\n", &altura);
    printf("Seu nome é: %s\n", &nome);
}