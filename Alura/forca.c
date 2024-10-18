#include <stdio.h>
#include <string.h>

void abertura() {
    printf("*********************\n");
    printf("*   Jogo de forca   *\n");
    printf("*********************\n\n");
}

int main() {
    char palavrasecreta[20];
    int tentativas = 0;
    char chutes[26];
    int enforcou = 0;
    int acertou = 0;

    sprintf(palavrasecreta, "MELANCIA");
    
    abertura();


do {
for(int i = 0; i < strlen(palavrasecreta); i++) {
    int achou = 0;
    for(int j = 0; j < tentativas; j++) {
        if(chutes[j] == palavrasecreta[i]) {
            achou = 1;
            break;
            }
        }
        if(achou) {
            printf("%c", palavrasecreta[i]);
        }
        else {
            printf("_ ");
        }
    }
    char chute;
    scanf(" %c", &chute);

    chutes[tentativas] = chute;
    tentativas++;
} while(!enforcou && !acertou);
}