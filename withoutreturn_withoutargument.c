#include <stdio.h>
int m, n, sum;

void addNumbers() {
    sum = m+n;
}

int main() {
    printf("Enter first number: ");
    scanf("%d", &m);

    printf("Enter second number: ");
    scanf("%d", &n);
    addNumbers();

    printf("Sum: %d\n", sum);

    return 0;
}