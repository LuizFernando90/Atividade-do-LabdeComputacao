#include <stdio.h>

// Função para preencher uma matriz com valores inseridos pelo usuário
void preencher_matriz(int matriz[2][3], char nome_matriz) {
    printf("Digite os elementos da matriz %c:\n", nome_matriz);
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
}

// Função para exibir uma matriz
void exibir_matriz(int matriz[2][3]) {
    printf("Matriz:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

// Função para somar duas matrizes e armazenar o resultado em uma terceira matriz
void somar_matrizes(int matriz1[2][3], int matriz2[2][3], int resultado[2][3]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

int main() {
    int matrizA[2][3], matrizB[2][3], soma[2][3];

    // Preenche as matrizes A e B com valores inseridos pelo usuário
    preencher_matriz(matrizA, 'A');
    preencher_matriz(matrizB, 'B');

    // Soma as matrizes A e B e armazena o resultado na matriz soma
    somar_matrizes(matrizA, matrizB, soma);

    // Exibe a matriz soma
    exibir_matriz(soma);

    return 0;
}
