#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero, palpite;

    srand(time(NULL));
    numero = rand() % 100 + 1;

    do {
        printf("Digite seu palpite (1 a 100): ");
        scanf("%d", &palpite);

        if (palpite < numero) {
            printf("Muito baixo!\n");
        } else if (palpite > numero) {
            printf("Muito alto!\n");
        } else {
            printf("Parabéns! Você acertou!\n");
        }

    } while (palpite != numero);

    return 0;
}
