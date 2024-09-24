#include<stdio.h>

unsigned int factorial(int n) 
{
    if (n == 0 || n == 1)  // Base case for recursion
        return 1;
    return n * factorial(n - 1);
}
unsigned int ncr(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}
int main()
{
    //Lab - 6) Develop a C program to compute the NCR of two numbers
    int n, r, i;
    printf("Enter the value of N and R: ");
    scanf("%d%d", &n, &r);
    if (r > n) 
        printf("Invalid input!\n");
    else 
        printf("NCR(%d, %d) = %d\n", n, r, ncr(n, r));
    return 0;
}


// #include <stdio.h>

// // Function to calculate factorial of a number using recursion
// long long factorial(int n) 
// {
//     if (n == 0 || n == 1) 
//     {
//         return 1;
//     } 
//     else 
//     {
//         return n * factorial(n - 1);
//     }
// }
