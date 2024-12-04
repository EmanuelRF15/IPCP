#include <stdio.h>

int main() {
    int num, fatorial = 1;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    int i = 1;
    while (i <= num) {
        fatorial *= i;
        i++;
    }

    printf("O fatorial de %d é: %d\n", num, fatorial);

    return 0;
}
