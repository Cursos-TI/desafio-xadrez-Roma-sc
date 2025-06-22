#include <stdio.h> 

int main() {
    
    printf("--- Movimento da Torre (5 casas para a Direita) ---\n");
    for (int i = 0; i < 5; i++) { 
        printf("Direita\n"); 
    }
    printf("\n"); 

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

    return 0; 
}
