#include <stdio.h>

// Função para calcular a área do retângulo
float calcular_area(float base, float altura) {
    return base * altura;
}

int main() {
    float base, altura;

    printf("Digite a base do retângulo: ");
    scanf("%f", &base);
    printf("Digite a altura do retângulo: ");
    scanf("%f", &altura);

    float area = calcular_area(base, altura);
    printf("A área do retângulo é: %.2f\n", area);

    return 0;
}
