#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int size) {
    int i, j, minIndex;

    for (i = 0; i < size - 1; i++) {
        minIndex = i;

        for (j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        if (minIndex != i) {
            swap(&arr[i], &arr[minIndex]);
        }
         printf("arr in progress \n");
    for(int ms=0;ms<=size-1;ms++){
       
        printf("%d",arr[ms]);
    }
    printf("\n");
    }
    
}

void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size, i;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    printArray(arr, size);

    selectionSort(arr, size);

    printf("Sorted array: ");
    printArray(arr, size);

    return 0;
}
