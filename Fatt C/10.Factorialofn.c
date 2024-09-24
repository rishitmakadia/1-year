#include <stdio.h>

int factorial(int n) 
{
    int result = 1;
    for(int i = 1; i <= n; i++) 
    {
        result *= i;
    }
    return result;
}

int main() 
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if(num < 0) 
    {
        printf("Error! Factorial of a negative number doesn't exist.");
    } 
    else 
    {
        printf("The factorial of %d is %d.", num, factorial(num));
    }

    return 0;
}