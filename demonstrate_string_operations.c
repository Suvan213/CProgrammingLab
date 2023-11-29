
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello, world!";
    char str2[] = "Hello";
    char str3[50];
    int len1, len2, i;

    // Get length of strings
    len1 = strlen(str1);
    len2 = strlen(str2);

    // Copy str1 to str3
    strcpy(str3, str1);

    // Concatenate str1 and str2
    strcat(str3, str2);

    // Compare str1 and str2
    if(strcmp(str1, str2) == 0) {
        printf("str1 and str2 are the same.\n");
    } else {
        printf("str1 and str2 are different.\n");
    }

    // Search for str2 in str1
    char *ptr = strstr(str1, str2);
    if(ptr) {
        printf("str2 found in str1 at index %d.\n", ptr - str1);
    } else {
        printf("str2 not found in str1.\n");
    }

    // Tokenize str1 using comma as delimiter
    char *token = strtok(str1, ",");
    while(token != NULL) {
        printf("Token: %s\n", token);
        token = strtok(NULL, ",");
    }

    // Convert string to uppercase
    for(i = 0; i < len1; i++) {
        str3[i] = toupper((unsigned char)str3[i]);
    }
    printf("String after converting to uppercase: %s\n", str3);

    // Convert string to lowercase
    for(i = 0; i < len1; i++) {
        str3[i] = tolower((unsigned char)str3[i]);
    }
    printf("String after converting to lowercase: %s\n", str3);

    return 0;
}