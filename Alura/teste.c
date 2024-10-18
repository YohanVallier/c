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
            printf("%c ", palavrasecreta[i]);
        } else {
            printf("_ ");
        }

    }
    printf("\n");
    // ...
}