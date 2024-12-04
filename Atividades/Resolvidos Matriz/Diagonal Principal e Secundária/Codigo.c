#include <stdio.h>

int main() {
    int matriz[3][3];
    int soma_principal = 0, soma_secundaria = 0;

    printf("Digite 9 números para a matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
            if (i == j) {
                soma_principal += matriz[i][j];
            }
            if (i + j == 2) {
                soma_secundaria += matriz[i][j];
            }
        }
    }

    printf("Soma da diagonal principal: %d\n", soma_principal);
    printf("Soma da diagonal secundária: %d\n", soma_secundaria);

    return 0;
}
