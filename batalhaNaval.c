#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.
// Definindo o tamanho do tabuleiro
#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3

// Função para exibir o tabuleiro
void exibirTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]); 
        }
        printf("\n");
    }
}


int main() {
    // Nível Novato - Posicionamento dos Navios
    // Inicializando o tabuleiro com água (valor 0)
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0};
    
    // Definindo as coordenadas e a orientação dos navios
    int linhaNavioHorizontal = 2, colunaNavioHorizontal = 3; // Coordenada inicial para o navio horizontal
    int linhaNavioVertical = 5, colunaNavioVertical = 6; // Coordenada inicial para o navio vertical
    
    // Posicionando o navio horizontal (tamanho 3)
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linhaNavioHorizontal] [linhaNavioVertical + i] = 3;
    }
     // Posicionando o navio vertical (tamanho 3)
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linhaNavioVertical + i][colunaNavioVertical] = 3;
    }

    // Exibindo o tabuleiro após posicionar os navios
    printf("Tabuleiro com navios posicionados:\n");
    exibirTabuleiro(tabuleiro);

    return 0;
}
