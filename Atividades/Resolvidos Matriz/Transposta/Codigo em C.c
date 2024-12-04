#include <stdio.h>

int main() {
    int matriz[2][3], transposta[3][2];

    printf("Digite 6 números para a matriz 2x3:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
            transposta[j][i] = matriz[i][j];
        }
    }

    printf("Matriz transposta 3x2:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}
