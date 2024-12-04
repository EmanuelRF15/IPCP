#include <stdio.h>

int main() {
    float salario_bruto, imposto, salario_liquido;

    printf("Digite o salário bruto: ");
    scanf("%f", &salario_bruto);

    if (salario_bruto <= 2000) {
        imposto = 0;
    } else if (salario_bruto <= 5000) {
        imposto = 0.10;
    } else {
        imposto = 0.20;
    }

    salario_liquido = salario_bruto - (salario_bruto * imposto);

    printf("O salário líquido é: %.2f\n", salario_liquido);

    return 0;
}
