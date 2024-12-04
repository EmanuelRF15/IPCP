#include <stdio.h>

int main() {
    int nota;

    printf("Digite a nota (0 a 10): ");
    scanf("%d", &nota);

    if(nota < 0 || nota > 10) {
        printf("Nota inválida.\n");
        return 0;
    }

    switch (nota) {
        case 10:
        case 9:
            printf("Conceito: A\n");
            break;
        case 8:
        case 7:
            printf("Conceito: B\n");
            break;
        case 6:
            printf("Conceito: C\n");
            break;
        case 5:
        case 4:
            printf("Conceito: D\n");
            break;
        default:
            printf("Conceito: F\n");
            break;
    }

    return 0;
}
