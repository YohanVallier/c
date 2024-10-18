#include <stdio.h>

int main() {
    char mapa[5][10+1];

    FILE *f;
    f = fopen("mapa.txt", "w");
    if(f == 0) {
        printf("Erro de leitura do mapa\n");
        exit(1);
    }

    for(int i = 0; i < 5; i++) {
        fscanf(f, "%s", mapa[i]);
    }
    for(int i = 0; i < 5; i++) {
        printf("%s\n", mapa[i]);
    }
    fclose(f);
}