#include <stdio.h>

int main() {
    int base, expoente, resultado = 1;

    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }

    printf("O resultado de %d^%d é: %d\n", base, expoente, resultado);

    return 0;
}
