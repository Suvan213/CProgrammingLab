#include <stdio.h>

int main() {
    char string[] = "suvanmahajan";
    int length = 0;
    while (string[length] != '\0') {
        length++;
    }
    printf("The length of the string is: %d\n", length);
    return 0;
}