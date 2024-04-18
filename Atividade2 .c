#include <stdio.h>

// Função para preencher uma matriz com valores inseridos pelo usuário
void preencher_matriz(int matriz[2][3], char nome_matriz) {
    printf("Digite os elementos da matriz %c:\n", nome_matriz);
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

// Função para exibir uma matriz
void exibir_matriz(int matriz[2][3]) {
    printf("Matriz resultante:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

// Função para multiplicar duas matrizes e armazenar o resultado em uma terceira matriz
void multiplicar_matrizes(int matriz1[2][3], int matriz2[2][3], int resultado[2][3]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            resultado[i][j] = matriz1[i][j] * matriz2[i][j];
        }
    }
}

int main() {
    int matrizA[2][3], matrizB[2][3], produto[2][3];

    // Preenche as matrizes A e B com valores inseridos pelo usuário
    preencher_matriz(matrizA, 'A');
    preencher_matriz(matrizB, 'B');

    // Multiplica as matrizes A e B e armazena o resultado na matriz produto
    multiplicar_matrizes(matrizA, matrizB, produto);

    // Exibe a matriz produto
    exibir_matriz(produto);

    return 0;
}
