#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr1, *arr2, *arr3;
    int size1 = 5, size2 = 3, newSize = 8;

    arr1 = (int *)malloc(size1 * sizeof(int));

    if (arr1 == NULL) {
        printf("Memory allocation failed for arr1\n");
        return 1;
    }

    printf("Memory allocated successfully for arr1\n");

    for (int i = 0; i < size1; i++) {
        arr1[i] = i + 1;
    }

    printf("arr1 elements: ");
    for (int i = 0; i < size1; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    arr2 = (int *)calloc(size2, sizeof(int));

    if (arr2 == NULL) {
        printf("Memory allocation failed for arr2\n");
        free(arr1);  
        return 1;
    }

    printf("Memory allocated successfully for arr2\n");

    printf("arr2 elements: ");
    for (int i = 0; i < size2; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    arr3 = (int *)realloc(arr1, newSize * sizeof(int));

    if (arr3 == NULL) {
        printf("Memory reallocation failed for arr1\n");
        free(arr1); 
        free(arr2);  
        return 1;
    }

    printf("Memory reallocated successfully for arr1\n");

    for (int i = size1; i < newSize; i++) {
        arr3[i] = i + 1;
    }
    printf("Resized arr1 elements: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");
    free(arr2);
    free(arr3);

    return 0;
}     