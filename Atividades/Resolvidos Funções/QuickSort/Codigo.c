#include <stdio.h>

// Função para realizar a troca de elementos
void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Função para particionar o vetor
int particionar(int vetor[], int inicio, int fim) {
    int pivo = vetor[fim];
    int i = inicio - 1;

    for (int j = inicio; j < fim; j++) {
        if (vetor[j] <= pivo) {
            i++;
            trocar(&vetor[i], &vetor[j]);
        }
    }
    trocar(&vetor[i + 1], &vetor[fim]);
    return i + 1;
}

// Função recursiva do QuickSort
void quicksort(int vetor[], int inicio, int fim) {
    if (inicio < fim) {
        int indice_pivo = particionar(vetor, inicio, fim);
        quicksort(vetor, inicio, indice_pivo - 1);
        quicksort(vetor, indice_pivo + 1, fim);
    }
}

int main() {
    int vetor[6] = {5, 3, 8, 4, 2, 7};

    printf("Vetor antes da ordenação:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", vetor[i]);
    }

    quicksort(vetor, 0, 5);

    printf("\nVetor após a ordenação:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
