#include <stdio.h> 

int main() {
    
    printf("--- Movimento da Torre (5 casas para a Direita) ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }
    printf("\n"); 
    /
    printf("--- Movimento do Bispo (5 casas na Diagonal: Cima, Direita) ---\n");
    int casas_bispo = 0;
    while (casas_bispo < 5) {
        printf("Cima, Direita\n");
        casas_bispo++;
    }
    printf("\n"); 

    
    printf("--- Movimento da Rainha (8 casas para a Esquerda) ---\n");
    int casas_rainha = 0;
    do {
        printf("Esquerda\n");
        casas_rainha++;
    } while (casas_rainha < 8);
    printf("\n"); 

    
    printf("--- Movimento do Cavalo (2 casas Baixo, 1 casa Esquerda) ---\n");

    
    int mover_para_baixo = 2;
    int mover_para_esquerda = 1;

    
    for (int i = 0; i < mover_para_baixo; i++) {
        printf("Baixo\n"); 
    }

    
    int j = 0; 
    while (j < mover_para_esquerda) {
        printf("Esquerda\n"); 
        j++; 
    }
    printf("\n"); 

    return 0; 
}