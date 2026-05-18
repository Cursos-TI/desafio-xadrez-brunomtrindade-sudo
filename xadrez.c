#include <stdio.h>

int main() {
   
    //Numero de casas para cada peça:
    int torre = 5;
    int bispo = 5;
    int rainha = 8;
    int i;

    //Movimentos Torre:
    printf("Movimentos da Torre:\n");
    
    for(i = 0; i < torre; i++) {
        printf("A torre se moveu 1 casa para a direita\n");
        
    }
    printf("A torre moveu 5 casas para a direita!\n");

    //Movimentos Bispo:
    printf("\nMovimento do Bispo:\n");
    i = 0;
    while(i < bispo) {
        printf("O bispo se moveu 1 casa para Cima Direita\n");
        i++;
    }
    printf("O bispo moveu 5 casas para a diagonal superior direita!\n");

    // Movimento da Rainha:
    printf("\nMovimento da Rainha:\n");
    i = 0;
    do {
        printf("A rainha se moveu 1 casa para a esquerda\n");
        i++;
    } while(i < rainha);
    printf("A Rainha moveu 8 casas para a esquerda!\n");

    //Movimentos Cavalo:
    printf("\nMovimento do Cavalo:\n");

    for(i = 0; i < 2; i++) {
        printf("O cavalo se moveu 1 casa para baixo\n");

        int j = 0;

        while(j < 1) {
            printf("O cavalo se moveu 1 casa para a esquerda\n");
            j++;
        }
    }

    printf("O cavalo realizou o movimento em L!\n");

    return 0;
}
