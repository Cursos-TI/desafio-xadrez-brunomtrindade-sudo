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

    return 0;
}

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
