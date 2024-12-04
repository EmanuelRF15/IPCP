#include <stdio.h>

// Função recursiva para calcular o fatorial
int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * fatorial(n - 1);
}

int main() {
    int numero;

    printf("Digite um número para calcular o fatorial: ");
    scanf("%d", &numero);

    int resultado = fatorial(numero);
    printf("O fatorial de %d é: %d\n", numero, resultado);

    return 0;
}
