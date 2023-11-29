#include <stdio.h>

int main() {
    int arr[10];
    
    for (int i = 0; i < 10; i++) {
        arr[i] = i * 10;
    }

    for (int i = 0; i < 10; i++) {
        printf("Element %d: Address = %d\n", i, (void*)&arr[i]);
    }

    return 0;
}