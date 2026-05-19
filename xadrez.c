#include <stdio.h>

// Funções recursivas para os movimentos das peças:

void movimentotorre(int casas) {
    if(casas > 0) {
        printf("A torre se moveu 1 casa para a direita\n");
        movimentotorre(casas - 1);
    }
}

void movimentorainha(int casas) {
    if(casas > 0) {
        printf("A rainha se moveu 1 casa para a esquerda\n");
        movimentorainha(casas - 1);
    }
}

void movimentobispo(int casas) {

    for(int i = 0; i < 1; i++) {

        for(int j = 0; j < 1; j++) {
            printf("O bispo se moveu 1 casa para Cima Direita\n");
        }
    }

    if(casas > 1) {
        movimentobispo(casas - 1);
    }
}

int main() {

    // Número de casas para cada peça
    int torre = 5;
    int bispo = 5;
    int rainha = 8;

    // TORRE 
    printf("Movimentos da Torre:\n");

    movimentotorre(torre);

    printf("A torre moveu 5 casas para a direita!\n");

    // BISPO
    printf("\nMovimento do Bispo:\n");

    movimentobispo(bispo);

    printf("O bispo moveu 5 casas para a diagonal superior direita!\n");

    // RAINHA 
    printf("\nMovimento da Rainha:\n");

    movimentorainha(rainha);

    printf("A Rainha moveu 8 casas para a esquerda!\n");

    //  CAVALO 
    printf("\nMovimento do Cavalo:\n");

    for(int i = 1, vertical = 0; i <= 3; i++) {

        if(vertical < 2) {
            printf("O cavalo se moveu 1 casa para cima\n");
            vertical++;
            continue;
        }

        for(int j = 0; j < 1; j++) {
            printf("O cavalo se moveu 1 casa para a direita\n");
            break;
        }
    }

    printf("O cavalo realizou o movimento em L!\n");

    return 0;
}
