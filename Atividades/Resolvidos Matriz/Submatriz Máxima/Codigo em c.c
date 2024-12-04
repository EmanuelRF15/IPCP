#include <stdio.h>

int main() {
    int matriz[4][4];
    int max_soma = 0, soma_atual;
    int submatriz[2][2];
    int linha_max, coluna_max;

    printf("Digite 16 números para a matriz 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            soma_atual = matriz[i][j] + matriz[i][j+1] + 
                         matriz[i+1][j] + matriz[i+1][j+1];
            if (soma_atual > max_soma) {
                max_soma = soma_atual;
                linha_max = i;
                coluna_max = j;
            }
        }
    }

    printf("Submatriz 2x2 de maior soma:\n");
    for (int i = linha_max; i < linha_max + 2; i++) {
        for (int j = coluna_max; j < coluna_max + 2; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("Soma máxima: %d\n", max_soma);

    return 0;
}
