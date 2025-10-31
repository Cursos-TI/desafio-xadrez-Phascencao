#include <stdio.h>

// Desafio: Nível Novato - Movimentando as Peças do Xadrez

int main() {

    // TORRE - com FOR
    // A Torre move-se em linha reta (horizontal ou vertical)
    // Ela se moverá 5 casas para a direita
    int i;
    printf("Movimento da Torre:\n");
    for (i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // BISPO - com WHILE
    // O Bispo move-se na diagonal
    // Ele se moverá 5 casas na diagonal "Cima e Direita"
    int j = 1;
    printf("\nMovimento do Bispo:\n");
    while (j <= 5) {
        printf("Cima Direita\n");
        j++;
    }

    // RAINHA - com DO-WHILE
    // A Rainha move-se em todas as direções
    // Ela se moverá 8 casas para a esquerda
    int k = 1;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    return 0;
}
