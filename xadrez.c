#include <stdio.h>

// Funções recursivas e de movimento fora do main

void moverTorre(int i) {
    if (i > 5) return; // condição de parada
    printf("Direita\n");
    moverTorre(i + 1); // chama a si mesma
}

void moverBispo(int i) {
    if (i >= 5) return;
    printf("Cima Direita\n");
    moverBispo(i + 1);
}

void moverRainha(int i) {
    if (i >= 8) return;
    printf("Esquerda\n");
    moverRainha(i + 1);
}

void moverCavalo() {
    for (int i = 0; i < 2; i++) {       // 2 vezes sobe 2 casas
        for (int j = 0; j < 1; j++) {   // e anda 1 para a direita
            printf("Cavalo: Cima\n");
            printf("Cavalo: Cima\n");
            printf("Cavalo: Direita\n");
        }
    }
}

int main() {

    printf("\nMovimento da Torre (recursivo):\n");
    moverTorre(1);

    printf("\nMovimento do Bispo (recursivo):\n");
    moverBispo(0);

    printf("\nMovimento da Rainha (recursivo):\n");
    moverRainha(0);

    printf("\nMovimento do Cavalo (loops aninhados):\n");
    moverCavalo();

    return 0;
}
