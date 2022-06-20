#include <stdio.h>

// logica com matrizes quadrada
// matriz de int e de char

int main(){

    int i = 0, j = 0;
    int tamanho;
    int linhaMA, colunaMA;
    int matrizA[linhaMA][colunaMA];

    //declaracao da matriz
    printf("\n\tMatriz quadrada de inteiros\n");
    printf("\nDigite o tamanho da matriz: ");
    scanf("%d", &tamanho);

    linhaMA = tamanho;
    colunaMA = tamanho;

    printf("\nDigite os elementos da matriz: ");
    for (i = 0; i < tamanho; i++){
        printf("\nelemento [%d][%d]: ", i, j);
        for (j = 0; j < tamanho; j++){
            scanf("%d", &matrizA[i][j]);
        }
    }
    for (i = 0; i < tamanho; i++){
        for (j = 0; j < tamanho; j++){
            printf(" %d ", matrizA[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}