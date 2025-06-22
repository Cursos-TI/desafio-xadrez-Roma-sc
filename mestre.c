#include <stdio.h> 

void moverTorreRecursivo(int casas_restantes) {
    
    if (casas_restantes <= 0) {
        return; 
    }
    
    printf("Direita\n");
    
    moverTorreRecursivo(casas_restantes - 1); 
}


void moverBispoRecursivo(int casas_restantes) {
    
    if (casas_restantes <= 0) {
        return; 
    }
    
    printf("Cima, Direita\n");
    
    moverBispoRecursivo(casas_restantes - 1); 
}


void moverRainhaRecursivo(int casas_restantes) {
    
    if (casas_restantes <= 0) {
        return; 
    }
    
    printf("Esquerda\n");
    
    moverRainhaRecursivo(casas_restantes - 1); 
}

int main() {
   
    printf("--- Movimento da Torre (5 casas para a Direita - Recursivo) ---\n");
    moverTorreRecursivo(5); 
    printf("\n"); 

    
    printf("--- Movimento do Bispo (5 casas na Diagonal: Cima, Direita - Recursivo e Loops Aninhados) ---\n");
    
    int num_movimentos_bispo = 5;
    printf("  (Via Loops Aninhados):\n");
    for (int i = 0; i < num_movimentos_bispo; i++) { 
        printf("Cima"); 

        
        for (int j = 0; j < 1; j++) { 
            printf(", Direita"); 
        }
        printf("\n"); 
    }
    printf("\n"); 


    
    printf("--- Movimento da Rainha (8 casas para a Esquerda - Recursivo) ---\n");
    moverRainhaRecursivo(8); 
    printf("\n"); 

    
    printf("--- Movimento do Cavalo (2 casas Cima, 1 casa Direita - Loops Aninhados Complexos) ---\n");

    int casas_cima = 0; 
    int casas_direita = 0; 
    const int MAX_CIMA = 2; 
    const int MAX_DIREITA = 1; 

    
    for (casas_cima = 0; casas_cima < MAX_CIMA; casas_cima++) {
        printf("Cima\n"); // Imprime o movimento para cima

        
        if (casas_cima == 0) {
            
            continue;
        }
        
    }

   
    while (casas_direita < MAX_DIREITA) {
        printf("Direita\n"); 
        casas_direita++;
    }
    printf("\n"); 

    return 0; 
}