#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

void printArray(int* v, int n) {
    printf("[ ");
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("]\n");
}

int main() {
    int original[] = {64, 34, 25, 12, 22, 11, 90, 105, 7};
    int n = sizeof(original) / sizeof(original[0]);
    int* arr = (int*)malloc(n * sizeof(int));
    int opcao;
    
    do {
        // Reseta o array para o estado desordenado a cada teste
        for(int i=0; i<n; i++) arr[i] = original[i];

        printf("\n--- TESTE DE ALGORITMOS DE ORDENACAO ---\n");
        printf("1. Selection Sort\n");
        printf("2. Insertion Sort\n");
        printf("3. Bubble Sort\n");
        printf("4. Merge Sort\n");
        printf("5. Heap Sort\n");
        printf("6. Quick Sort\n");
        printf("7. Counting Sort\n");
        printf("8. Radix Sort\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if(opcao == 0) break;

        printf("\nAntes: ");
        printArray(arr, n);

        switch (opcao) {
            case 1: selectionSort(arr, n); break;
            case 2: insertionSort(arr, n); break;
            case 3: bubbleSort(arr, n); break;
            case 4: mergeSort(arr, 0, n-1); break;
            case 5: heapySort(arr, n); break;
            case 6: quickSort(arr, 0, n-1); break;
            case 7: countingSort(arr, n, 105); break; 
            case 8: radixSort(arr, n); break;
            default: printf("Opcao invalida!\n");
        }

        printf("Depois: ");
        printArray(arr, n);

    } while (opcao != 0);

    free(arr);
    return 0;
}
