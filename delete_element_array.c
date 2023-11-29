#include <stdio.h>

int main() {
    int array[100]; 
    int n, positionToDelete;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter the position of the element you want to delete (0-based index): ");
    scanf("%d", &positionToDelete);

    if (positionToDelete < 0 || positionToDelete >= n) {
        printf("Invalid position. Position should be in the range [0, %d].\n", n - 1);
        return 1;
    }

   
    for (int i = positionToDelete; i < n - 1; i++) {
        array[i] = array[i + 1];
    }

    n--;  

    printf("Array after deleting the element:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}