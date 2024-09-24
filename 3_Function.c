#include<stdio.h>

// long long factorial(int n) 
// {
//     if (n == 0 || n == 1)  // Base case for recursion
//         return 1;
//     return n * factorial(n - 1);
// }
// long long int ncr(int n, int r)
// {
//     return factorial(n) / (factorial(r) * factorial(n - r));
// }
// int main()
// {
//     //Lab - 6) Develop a C program to compute the NCR of two numbers
//     int n, r;
//     printf("Enter the value of N and R: ");
//     scanf("%d%d", &n, &r);
//     if (r > n) 
//         printf("Invalid input!\n");
//     else 
//         printf("NCR(%d, %d) = %llu\n", n, r, ncr(n, r));
//     return 0;
// }

// void swap_call_by_val (int x, int y)
// {
//     int temp = x;
//     x = y;
//     y = temp;
//     printf("\nAfter swapping using call by value: \n x = %d   y = %d ", x, y);
// }
// void swap_call_by_ref (int *ptrx, int *ptry)
// {
//     int temp = *ptrx;
//     *ptrx = *ptry;
//     *ptry = temp;
//     printf("\nAfter swapping using call by reference: \n x = %d   y = %d ", *ptrx, *ptry);
// }
// int main()
// {
//     int x, y;
//     printf("Enter value of x: ");
//     scanf("%d", &x);
//     printf("Enter value of y: ");
//     scanf("%d", &y);
//     swap_call_by_val(x, y);
//     printf("\n x = %d", x);
//     printf("\n y = %d", y);
//     swap_call_by_ref(&x, &y);
//     printf("\n x = %d", x);
//     printf("\n y = %d", y);
// }