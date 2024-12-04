#include <stdio.h>

// Função para verificar se um elemento está presente no vetor
int elemento_presente(int vetor[], int tamanho, int elemento) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == elemento) {
            return 1; // Elemento encontrado
        }
    }
    return 0; // Elemento não encontrado
}

int main() {
    int vetor1[5], vetor2[5], uniao[10];
    int tamanho_uniao = 0;

    printf("Digite 5 números para o primeiro vetor:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &vetor1[i]);
        uniao[tamanho_uniao++] = vetor1[i]; // Adiciona direto à união
    }

    printf("Digite 5 números para o segundo vetor:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &vetor2[i]);
        if (!elemento_presente(uniao, tamanho_uniao, vetor2[i])) {
            uniao[tamanho_uniao++] = vetor2[i];
        }
    }

    printf("Vetor união (sem repetição):\n");
    for (int i = 0; i < tamanho_uniao; i++) {
        printf("%d ", uniao[i]);
    }

    return 0;
}
