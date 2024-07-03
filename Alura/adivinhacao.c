#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    printf("*********************************\n");
    printf("Bem vindo ao jogo de adivinhacao\n");
    printf("*********************************\n");

    srand(time(0));
    int numerosecreto = rand() % 100;
    int chute;
    int tentativas = 1;
    double pontos = 1000;
    int numerodetentativas;
    int dificuldade;
    
    printf("Escolha o nivel de dificuldade\n");
    printf("(1) Facil (2)Medio (3)Dificil\n");
    printf("Escolha: ");
    scanf("%d", &dificuldade);

    while (dificuldade != 1 && dificuldade != 2 && dificuldade != 3){
        printf("Tente novamente.");
        printf("(1) Facil (2)Medio (3)Dificil.\n");
        printf("Escolha: ");
        scanf("%d", &dificuldade);
    }

    if(dificuldade == 1){
        numerodetentativas = 20;
    }

    if(dificuldade == 2){
        numerodetentativas = 10;
    }

    if(dificuldade == 3){
        numerodetentativas = 5;
    }

    for (int i = 1; i <= numerodetentativas; i++) {
    
    printf("Tentativa %d\n", tentativas);
    printf("Chute um numero de 1 a 99: ");
    scanf("%d", &chute);

    if(chute < 0){
        printf("Voce nao pode chutar numeros negativos\n");
        continue;
    }

    printf("Seu chute foi %d\n", chute);

    int acertou = (chute == numerosecreto);
    int maior = (chute > numerosecreto);
    int menor = (chute < numerosecreto);

    if(acertou){
    printf("Voce acertou!\n"); 
    printf("Fim de jogo!\n");
    printf("Voce acertou o jogo em %d tentativas!\n", tentativas);
    printf("A quantidade de pontos que voce obteve e igual %.1f", pontos);
    break;
    }
    else if(maior){
        printf("Seu chute foi maior que o numero secreto\n");
    }
    else if(menor){
        printf("Seu chute foi menor que o numero secreto\n");
    }
    double pontosperdidos = abs(chute - numerosecreto) / 2.0;
    pontos -= pontosperdidos;
    tentativas += 1;
    } 
    } 
    