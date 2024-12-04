#include <stdio.h>
#include <math.h>

int main() {
    char operacao;
    double num1, num2, resultado;

    printf("Escolha uma operação (+, -, *, /, ^, r): ");
    scanf(" %c", &operacao);

    if (operacao == 'r') {
        printf("Digite o número: ");
        scanf("%lf", &num1);
        resultado = sqrt(num1);
    } else {
        printf("Digite dois números: ");
        scanf("%lf %lf", &num1, &num2);

        switch (operacao) {
            case '+':
                resultado = num1 + num2;
                break;
            case '-':
                resultado = num1 - num2;
                break;
            case '*':
                resultado = num1 * num2;
                break;
            case '/':
                if (num2 != 0) {
                    resultado = num1 / num2;
                } else {
                    printf("Erro: Divisão por zero.\n");
                    return 1;
                }
                break;
            case '^':
                resultado = pow(num1, num2);
                break;
            default:
                printf("Operação inválida.\n");
                return 1;
        }
    }

    printf("O resultado é: %.2f\n", resultado);
    return 0;
}
