#include <stdio.h>

int main() {
    float saldo = 0.0, valor;
    int opcao;

    do {
        printf("\nMenu:\n");
        printf("1 - Entrada de valor\n");
        printf("2 - Saída de valor\n");
        printf("3 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o valor de entrada: ");
                scanf("%f", &valor);
                saldo += valor;
                printf("Saldo atual: %.2f\n", saldo);
                break;
            case 2:
                printf("Digite o valor de saída: ");
                scanf("%f", &valor);
                saldo -= valor;
                printf("Saldo atual: %.2f\n", saldo);
                break;
            case 3:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opção inválida.\n");
                break;
        }
    } while (opcao != 3);

    return 0;
}
