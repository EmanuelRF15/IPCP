#include <stdio.h>

int main() {
    int vetor[10], num, encontrado = 0;

    printf("Digite 10 números:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Digite o número a ser buscado: ");
    scanf("%d", &num);

    for (int i = 0; i < 10; i++) {
        if (vetor[i] == num) {
            encontrado = 1;
            break;
        }
    }

    if (encontrado) {
        printf("Número encontrado!\n");
    } else {
        printf("Número não encontrado.\n");
    }

    return 0;
}
