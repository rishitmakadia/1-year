#include<stdio.h>
int main()
{
    //break in the loop
    // int i;
    // for (i = 0; i <= 5; i++)
    // {
    //     if (i==3)
    //         // continue;
    //         // break;
    //         goto str;
    //     printf("%d\n", i);
    // }
    // str:
    //     // printf("WTF 3 came\n");
        

    //prime no (Important)
    // int num, i, flag;
    // printf("Prime number between the range 1 to 30\n");
    // for (num = 2; num <= 30; num++)
    // {
    //     flag = 0;
    //     // for (i = 2; i < num; i++)
    //     for (i = 2; i <= num/2; i++)
    //     {
    //         if (num%i==0)
    //         {
    //             flag++;
    //             break;
    //         }
    //     }
    //     if (flag==0)
    //         printf("%d is a prime number\n", num);
    // }


    //Write a C prog that prompts the user to input a series of int until the user stops entering 0 using a while loop. Calculate and print the sum of all the positive integers entered
    // int num,sum=0;
    // while (1)
    // {
    //     printf("Enter a number: ");
    //     scanf("%d", &num);
    //     if (num == 0)
    //         break;
    //     sum = sum + num;
    // }
    // printf("Sum of numbers entered is %d", sum);

    // Sum of the program 1^2+2^2+3^2
    // int n, i,sum=0 ;
    // printf("Enter the value of N: ");
    // scanf("%d", &n);
    // for (i = 1; i <= n;i++)
    // {
    //     sum = sum + (i*i);
    // }
    // printf("Sum = %d", sum);
    
    
    // Sum of the program 1+1/2+1/3+-----+1/n
    // float i, sum=0;
    // int n;
    // printf("Enter the value of N: ");
    // scanf("%d", &n);
    // for (i = 1; i <= n;i++)
    // {
    //     sum = sum + (1 / i);
    // }
    // printf("Sum = %f", sum);
    
    
    // Sum of the program 1+1/2!+1/3!+-----+1/n!
    // float i,g,mul, sum=0;
    // int n;
    // printf("Enter the value of N: ");
    // scanf("%d", &n);
    // for (i = 1; i <= n;i++)
    // {
    //     mul = 1;
    //     for (g = i; g > 0; g--)
    //     {
    //         mul = mul * g;
    //     }
    //     sum = sum + (1 / mul);
    // }
    // printf("Sum = %f", sum);

    // Fibonassi Series 0112358
    // int n,i, t1=0, t2=1, t3;
    // printf("Enter the value of N: ");
    // scanf("%d", &n);
    // for (i = 1; i <= n;i++)
    // {
    //     printf("%d", t1);
    //     t3 = t1 + t2;
    //     t1 = t2;
    //     t2 = t3;
    // }


    //Lab - 6) Develop a C program to compute the GCD of two numbers
    // int n1, n2, small, i, ans;
    // printf("Enter the value of N1 and N2: ");
    // scanf("%d%d", &n1, &n2);
    // n1 = (n1 > 0) ? n1 : - n1;
    // n2 = (n2 > 0) ? n2 : - n2;
    
    // while(n1!=n2)
    // {
    //     if (n1>n2)
    //         n1 = n1 - n2;
    //     else
    //         n2 = n2 - n1;
    // }
    // printf("GCD = %d", n1);

    // small = (n1 > n2) ? n2 : n1;
    // for (i = small; i >=1;i--)
    // {
    //     if (n1%i==0 && n2%i==0)
    //     {
    //         ans = i;
    //         break;
    //     }    
    // }
    // printf("GCD = %d", ans);

    //Lab - 6) Develop a C program to compute the NCR of two numbers
    // int n, r, i;
    // printf("Enter the value of N and R: ");
    // scanf("%d%d", &n, &r);
    // long long int facn = 1, facr=1, facnr = 1, ans;
    // for (i = 1; i <= n; i++)
    // {
    //     facn = facn * i;
    // }
    // // printf("%ld", facn);
    // for (i = 1; i <= r; i++)
    // {
    //     facr = facr * i;
    // }
    // for (i = 1; i <= (n-r); i++)
    // {
    //     facnr = facnr * i;
    // }
    // ans = facn / (facr * facnr);
    // printf("NCR is %lld", ans);

    return 0;
}