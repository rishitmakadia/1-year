#include <stdio.h>
#include <string.h>

int main() 
{
    char str1[50] = "Hello, World!";
    char str2[50];

    // Demonstrate strlen
    int length = strlen(str1);
    printf("\nLength of str1: %d\n\n", length);

    // Demonstrate strcpy
    strcpy(str2, str1);
    printf("str2 after strcpy: %s\n\n", str2);

    // Modify str1 and demonstrate that str2 is a copy
    strcat(str1, " This is a modified string.");
    printf("str1 after modification: %s\n\n", str1);
    printf("str2 remains unchanged: %s\n\n", str2);

    return 0;
}