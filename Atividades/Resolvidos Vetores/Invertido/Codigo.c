#include <stdio.h>

int main() {
    int vetor[5];

    printf("Digite 5 números:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Vetor invertido:\n");
    for (int i = 4; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
