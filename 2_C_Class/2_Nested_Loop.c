#include<stdio.h>
int main()
{
    // Q-1) i
    // int n,i,j;
    // printf("Enter the no. of rows: ");
    // scanf("%d", &n);
    // for (i = 1; i <= n; i++)
    // {
    //     for (j = 1; j <= i;j++)
    //     {
    //         printf(" * ");
    //     }
    //     printf("\n");
    // }


    // int n,i,j,k;
    // printf("Enter the no. of rows: ");
    // scanf("%d", &n);
    // for (i = 1; i <= n; i++)
    // {
    //     for (k = 1; k <= n - i;k++)
    //     {
    //         printf("  ");
    //     }
    //     for (j = 1; j <= i; j++)
    //     {
    //         printf(" %d", j);
    //     }
    //     printf("\n");
    // }

    // Q-1) ii
    // int n,i,j;
    // printf("Enter the no. of rows: ");
    // scanf("%d", &n);
    // for (i = n; i >= 1; i--)
    // {
    //     for (j = 1; j <= i;j++)
    //     {
    //         printf(" * ");
    //     }
    //     printf("\n");
    // }

    // Q-1) iii Flloyd's Triangle
    // int n,i,j;
    // printf("Enter the no. of rows: ");
    // scanf("%d", &n);
    // for (int no=1, i=1; i <= n; i++)
    // {
    //     for (j = 1; j <= i;j++)
    //     {
    //         printf(" %d ", no);
    //         no++;
    //     }
    //     printf("\n");
    // }

    // Q-1) iv
//    int n,i,j;
//    char alp=97;
//    printf("Enter the no. of rows: ");
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)
//    {
//       for (j = 1; j <= i;j++)
//       {
//          printf(" %c ", alp);
//          alp++;
//       }
//         printf("\n");
//    }

    // Q-1) v
//    int i, space, rows, k = 0;
//    printf("Enter the number of rows: ");
//    scanf("%d", &rows);
//    for (i = 1; i <= rows; ++i, k = 0) 
//    {
//       for (space = 1; space <= rows - i; ++space) 
//       {
//          printf("  ");
//       }
//       while (k != (2 * i - 1)) 
//       {
//          printf("* ");
//          ++k;
//       }
//       printf("\n");
//    }

   //Pascal's triangle
    // int rows, coef = 1, space, i, j;
    // printf("Enter the number of rows: ");
    // scanf("%d", &rows);
    // for (i = 0; i < rows; i++) 
    // {
    //     for (space = 1; space <= rows - i; space++)
    //         printf("  ");
    //     for (j = 0; j <= i; j++) 
    //     {
    //         if (j == 0 || i == 0)
    //             coef = 1;
    //         else
    //             coef = coef * (i - j + 1) / j;
    //         printf("%4d", coef);
    //     }
    //     printf("\n");
    // }
}