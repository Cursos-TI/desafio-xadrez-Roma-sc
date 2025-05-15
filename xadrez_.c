#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define TAM 8

char tabuleiro [TAM][TAM];

// Peças do Tabuleiro Torre, Bispo e Rainha.
void iniciazarTabuleiro(){
    for (int i = 0; i < TAM; i++){
        for (int j = 0; j <TAM; j++){
            tabuleiro [i][j] = '.';
        }
    }
    tabuleiro[7][0] = 'T';
    tabuleiro[7][2] = 'B';
    tabuleiro[7][3] = 'R';
}

// Tabuleiro:
void mostrartabuleiro(){
    printf(" a b c d e f g h \n");
    for (int i =0; i < TAM; i++){
        printf("%d",8-i);
        for (int j = 0 ; j < TAM; j++){
            printf("%c", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

// Convertendo entrada
void converterCoordenada (const char *entrada, int *linha, int *coluna ){
    *coluna = tolower(entrada[0]) - 'a';
    *linha = 8 - (entrada[1] - '0');
}

// Validando a jogada 
void movimentovalido (char peca, int l1, int c1, int l2, int c2){
    int dl = abs( l2 - l1);
    int dc = abs (c2 - c1);
    
   switch (peca) {
        case 'T': // Torre
            scanf (l1 == l2 || c1 == c2);
        case 'B': // Bispo
            scanf (dl == dc);
        case 'Q': // Rainha
            scanf (l1 == l2 || c1 == c2 || dl == dc);
        default:
            return 0;
    }

}

//Movendo as Peças
int moverpeca (const char *origem, const char *destino){
    int l1, l2, c1, c2;
    converterCoordenada(origem, &l1, &c1);
    converterCoordenada(destino, &l2, &c2);

    char peca = tabuleiro[l1][c2];

    if (peca == '.' || peca =='\0'){
       printf( "Não tem peça na posição de origem!\n");
       
       return 0;
    }
    
    if (!movimentoValido(peca, l1, c1, l2, c2)) {
        printf("Movimento inválido para a peça %c!\n", peca);
        return 0;
    }
    
    tabuleiro[l2][c2] = peca;
    tabuleiro[l1][c1] = '.';
    
    return 1;
}

int main() {
    char origem[3], destino[3];

    inicializarTabuleiro();

    while (1) {
        imprimirTabuleiro();

        printf("Digite a origem (ex: a1) ou 'sair': ");
        scanf("%s", origem);
        if (strcmp(origem, "sair") == 0) break;

        printf("Digite o destino (ex: a4): ");
        scanf("%s", destino);

        moverPeca(origem, destino);
    }

    return 0;
}
